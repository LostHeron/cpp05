#include "Bureaucrat.hpp"
#include <iostream>

void	test_ok(void);
void	test_too_high(void);
void	test_too_low(void);
void	test_decrement(void);
void	test_increment(void);

# define MSG(msg) std::cout << "~~~~~~~~~~~~~~~ " msg " ~~~~~~~~~~~~~~~~~~~~~" << std::endl;
# define NL std::cout << std::endl;

int	main(void)
{
	MSG("test ok");
	test_ok();
	MSG("end");NL;

	MSG("test too high");
	test_too_high();
	MSG("end");NL;

	MSG("test too low");
	test_too_low();
	MSG("end");NL;

	MSG("test increment");
	test_increment();
	MSG("end");NL;

	MSG("test decrement");
	test_decrement();
	MSG("end");NL;
}
