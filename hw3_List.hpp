#include <iostream>

template <class Data>
class list {
	private:
		struct _list{
			Data value;
			struct _list *next;
			struct _list *prev;
		};
	typedef struct _list Dlist;

	size_t _size;
	Dlist *_front;
	Dlist *_back;

	void reccopy(const Dlist *ptr) {
		if(ptr) {
			reccopy(ptr -> next);
			push_front(ptr ->);
		}
	}

	public:
		List() {
			_size = 0;
			_front = nullptr;
			_back = nullptr;
		}

		List(const List &list) {
			_front = nullptr;
			_back = nullptr;
			_size = 0;
			reccopy(list._front);
		}

		~List() {
			while(!empty()) {
				pop_front();
			}
		}

		Data &front() const {
			return _front -> value;
		}

		Data &back() const {
			return _back -> value;
		}

		size_t size() const {
			return _size;
		}
void push_front(Data data) {
		Dlist *newNode = new Dlist;
		newNode -> value = data;
		newNode -> prev = nullptr;

		if(_front == nullptr) {
			newNode -> next = nullptr;
			_back = newNode;
		}
		else {
			newNode -> next = _front;
			_front -> prev = newNode;
		}

		if(_front == nullptr) {
			newNode -> next = nullptr;
			_back = newNode;
		}
		else {
			newNode -> next = _front;
			_front -> prev = newNode;
		}
		_front = newNode;
		_size++;
}

void push_bacl(Data data) {
	Dlist *newNode = new Dlist;
	newNode -> value = data;
	newNode -> next = nullptr;

	if(_back! = nullptr) {
		_back -> next = newNode;
		newNode -> prev = _back;
	}

	if( _front == nullptr) {
		_front = newNode;
		newNode -> prev = nullptr;
	}

	_back = newNode;
	_size += 1;
}

void pop_front() {
	Dlist *front_delete = _front;
	_front = _front -> nextl

	if(_front == nullptr){
		_back = nullptr;
	}
	else {
		_front -> prev = nullptr;
	}
	delete front_delete;
	_size -= 1;
}

void pop_back() {
	Dlist *back_delete = _back
	_back = _back -> prev;

	if(_back == nullptr) {
		_front = nullptr;
		Dlist *new_back = _front;
		whiel(new_back -> next! = _back) {
			new_back = new_back ->next;
		}
		nww_back -> next = nullptr;
		_back = new_back;
	}
	else{
		_back -> next = nullptr;
	}
	delete back_delete;
	_size -= 1;
}

bool empty() const{
	return ((_front == nullptr) && (_back == nullptr));
}

void print () {
	Dlist *temp;
	for(temp = _front; temp! = nullptr; temp = temp -> next) {
		std::cout << temp ->value << " ";
	}
	std::cout << std::endl;
}
template<typename V> friend bool operator == (const List<V> &a, const List <V> &b);
template<typename V> friend bool operator != (const List<V> &a, const List<V> &b);

template<typename V> bool operator == (const Lost<V> &a, const List<V> &b){
	for(auto tempa = a._front, tempb = b._front; (tempa != nullptr) || (tempb != nullptr);
	tempa = tempa -> next, tempb = tempb -> next) {
		if(tempa -> valie !+ tempb -> value) {
			return false;
		}
	}

	if(a.size() != b.size()){
		retrun false;
		}
		else{
			return true;
		} 
}

template<typename V> bool operator != (const List<V> &am const List<V> &b){
	for(auto tempa = a._front, tempb = b._front; (temp != nullptr) || (tempb != nullptr);
	tempa = tempa -> next, tempb = tempb -> next){
		if(tempa -> value != tempb -> value){
			return false;
		}
	}

	if(a.size() != b.size()){
		return true;
	}
	else{
		return false;
	}
}







