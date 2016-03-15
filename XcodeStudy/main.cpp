//
//  main.cpp
//  XcodeStudy
//
//  Created by Akira Matsuda on 3/16/16.
//  Copyright © 2016 Akira Matsuda. All rights reserved.
//

#include <iostream>
#include <string>
#include "FizzBuzz.hpp"

int main(int argc, const char * argv[]) {
	// insert code here...
	std::cout << ">> ";
	int num = 0;
	std::cin >> num;
	for (int i = 1; i <= num; i++) {
		std::cout << i << " : ";
		FizzBuzz::Result r = FizzBuzz::Judgement::judge(i);
		switch (r) {
			case FizzBuzz::Result::Fizz :
				std::cout << "Fizz";
				break;
			case FizzBuzz::Result::Buzz :
				std::cout << "Buzz";
				break;
			case FizzBuzz::Result::FizzBuzz :
				std::cout << "FizzBuzz";
				break;
			default:
				break;
		}
		std::cout << std::endl;
	}
	
	FizzBuzz::Judgement j;
	for (int i = 1; i <= num; i++) {
		j.judge_and_record(i);
	}

	return 0;
}
