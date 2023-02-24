#pragma once
#include <string>
#include <vector>
#include "token.h"

namespace Liz 
{
	class scanner 
	{
	private:
		std::string m_SourceCode;
		std::vector<token> m_TokenList;

	public:
	};
}