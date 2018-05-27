#include <iostream>

using namespace std;

class Inventory {
	public:
		float sum;
};

Inventory stock;

class Product {
	public:
		int id;
		float price;
		static int qty;

		Product() {
			id = qty;
			qty++;
		}

		~Product() {
			qty--;
		}

		void set(float price) {
			this->price = price;
			stock.sum += price;
		}
};

int Product::qty = 0;

int main() {
	return 0;
}
