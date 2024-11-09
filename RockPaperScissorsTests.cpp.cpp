#include "pch.h"
#include "CppUnitTest.h"
#include "RockPaperScissor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTestscpp
{
	TEST_CLASS(RockPaperScissorsTestscpp)
	{
	public:
		
		TEST_METHOD(TestRockBeatsScissors)
		{
			char result[20];
			determineWinner("Rock", "Scissors", result);
			Assert::AreEqual("player1", result); // expected outcome player1
		}
	};
}
