NAME		=	Orthodox

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f

SOURCE		=	main.cpp\
				Fixed.cpp

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