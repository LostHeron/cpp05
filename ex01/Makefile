# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/07 13:36:07 by jweber            #+#    #+#              #
#    Updated: 2026/02/19 13:17:52 by jweber           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ./a.out
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std="c++98" -MMD -MP -g3

INCLUDES_DIR = $(SOURCES_DIR)includes/

INCLUDES = -I $(INCLUDES_DIR)\
		   -I $(SOURCES_DIR)$(CLASS_DIR)$(BUREAUCRAT_DIR) \
		   -I $(SOURCES_DIR)$(CLASS_DIR)$(FORM_DIR) \
		   -I $(SOURCES_DIR)$(CLASS_DIR)$(SIGN_GRADE_DIR) \
		   -I $(SOURCES_DIR)$(CLASS_DIR)$(EXECUTE_GRADE_DIR) \

BUREAUCRAT_DIR := Bureaucrat/
BUREAUCRAT_FILES := Bureaucrat.cpp \

FORM_DIR := Form/
FORM_FILES := Form.cpp \

SIGN_GRADE_DIR := SignGrade/
SIGN_GRADE_FILES := SignGrade.cpp \

EXECUTE_GRADE_DIR := ExecuteGrade/
EXECUTE_GRADE_FILES := ExecuteGrade.cpp \

CLASS_DIR := class/
CLASS_FILES := $(addprefix $(FORM_DIR), $(FORM_FILES)) \
			   $(addprefix $(BUREAUCRAT_DIR), $(BUREAUCRAT_FILES)) \
			   $(addprefix $(SIGN_GRADE_DIR), $(SIGN_GRADE_FILES)) \
			   $(addprefix $(EXECUTE_GRADE_DIR), $(EXECUTE_GRADE_FILES)) \

TEST_BUREAUCRAT_DIR := test_bureaucrat/
TEST_BUREAUCRAT_FILES := test_bureaucrat.cpp \

TEST_FORM_DIR:= test_form/
TEST_FORM_FILES := test_form.cpp \
				   test_form_creation.cpp \
				   test_form_signing.cpp \


TEST_DIR := test/
TEST_FILES := $(addprefix $(TEST_BUREAUCRAT_DIR), $(TEST_BUREAUCRAT_FILES)) \
			  $(addprefix $(TEST_FORM_DIR), $(TEST_FORM_FILES)) \

SOURCES_DIR := srcs/
SOURCES_FILES := main.cpp \
				$(addprefix $(CLASS_DIR), $(CLASS_FILES)) \
				$(addprefix $(TEST_DIR), $(TEST_FILES)) \

SOURCES_FILES := $(addprefix $(SOURCES_DIR), $(SOURCES_FILES)) \

OBJECT_DIR := .obj/
OBJECT_FILES := $(addprefix $(OBJECT_DIR), $(SOURCES_FILES:.cpp=.o))

OBJECT_DEBUG_DIR := .obj_debug/

DEPS_FILES := $(OBJECT_FILES:.o=.d)

.PHONY : all clean fclean re debug

all: $(NAME)

$(NAME):  $(OBJECT_FILES)
	$(CXX) $(CXXFLAGS) $^ -o $@

-include $(DEPS_FILES)

$(OBJECT_DIR)%.o: %.cpp 
	@if ! [ -d $(shell echo $@ | sed "s/\/\w*\.o//g") ]; then\
		echo "directory does not exists, creating it!" ; \
		echo "mkdir -p " $(shell echo $@ | sed "s/\/\w*\.o//g") ; \
		mkdir -p $(shell echo $@ | sed "s/\/\w*\.o//g") ; \
	else \
		echo "directory does exists" ;\
	fi
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(OBJECT_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJECT_DIR)

fclean:
	$(MAKE) clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

debug:
	rm -f $(NAME)
	$(MAKE) OBJECT_DIR=$(OBJECT_DEBUG_DIR) CXXFLAGS="$(CXXFLAGS) -D\"MY_DEBUG\""

debug_clean:
	$(MAKE) OBJECT_DIR= clean

debug_fclean:
	$(MAKE) OBJECT_DIR=$(OBJECT_DEBUG_DIR) fclean

debug_re:
	$(MAKE) OBJECT_DIR=$(OBJECT_DEBUG_DIR) CXXFLAGS="$(CXXFLAGS) -D\"MY_DEBUG\"" re
