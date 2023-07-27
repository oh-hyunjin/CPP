NAME		=	Exercise01

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3
RM			=	rm -f

SOURCE		=	main.cpp\
				Animal.cpp\
				Dog.cpp\
				Cat.cpp\
				WrongAnimal.cpp\
				WrongCat.cpp\
				Brain.cpp

OBJECT		=	$(SOURCE:.cpp=.o)

all	: $(NAME)

$(NAME) : $(OBJECT)
	$(CXX) $(CXXFLAGS) $(OBJECT) -o $(NAME)

%.o : %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJECT)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re