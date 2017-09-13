#ifndef STACK_H
#define STACK_H
#include "slinked_list.h"
class stack {
		public:
				bool empty() const { return v.empty(); }
				int size() const { return v.size(); }
				void push(const data_t &din) { v.push_front(din); }
				void pop() { v.pop_front(); }
				const data_t & top() { return v.front(); }
		private:
				list v;
};
