#pragma once
#include <string>

namespace Liz 
{
	enum tokenType 
	{
		// Single-character tokens.
		LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
		COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

		// One or two character tokens.
		BANG, BANG_EQUAL,
		EQUAL, EQUAL_EQUAL,
		GREATER, GREATER_EQUAL,
		LESS, LESS_EQUAL,

		// Literals.
		IDENTIFIER, STRING, NUMBER,

		// Keywords.
		AND, CLASS, ELSE, FALSE, FUN, FOR, IF, NIL, OR,
		PRINT, RETURN, SUPER, THIS, TRUE, VAR, WHILE,

		END_OF_FILE
	};

	struct token 
	{
	public:
		tokenType type;
		std::string string_token;
		int literal_value; // note: make it a template in the future to support multiple types

		std::string to_string() 
		{
			return std::string(type + " " + string_token + " " + std::to_string(literal_value));
		}
	};
}