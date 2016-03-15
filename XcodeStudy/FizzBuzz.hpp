//
//  FizzBuzz.hpp
//  XcodeStudy
//
//  Created by Akira Matsuda on 3/16/16.
//  Copyright © 2016 Akira Matsuda. All rights reserved.
//

#ifndef FizzBuzz_hpp
#define FizzBuzz_hpp

#include <vector>
#include <tuple>

namespace FizzBuzz {
	typedef enum {
		None,
		Fizz,
		Buzz,
		FizzBuzz
	} Result;
	
	class Judgement {
	private:
		std::vector<std::tuple<int, Result>> history;
	public:
		static Result judge(int num) {
			Result r = None;
			if (num % 3 == 0 && num % 5 == 0) {
				r = FizzBuzz;
			}
			else if (num % 3 == 0) {
				r = Fizz;
			}
			else if (num % 5 == 0) {
				r = Buzz;
			}
			
			return r;
		}
		
		Result judge_and_record(int num) {
			Result r = FizzBuzz::Judgement::judge(num);
			auto t = std::make_tuple(num, r);
			this->history.push_back(t);
			
			return r;
		}
		
		std::vector<std::tuple<int, Result>> get_history() {
			return this->history;
		}
	};
}

#endif /* FizzBuzz_hpp */
