#include <iostream>
#include <unordered_set>
#include "Vector.h"


std::unordered_set<int> setOfNumbers(Vector<int>& ob)
{
    std::unordered_set<int> nums;
    std::unordered_set<int>::iterator it;

	for (int i = 0; i < ob.getSize(); i++)
	{
		nums.insert(ob[i]);
	}
 
    std::cout << "size = " << nums.size() << std::endl << "Elements of unordered_set\n";

    for (it = nums.begin(); it != nums.end(); ++it)
    {
        std::cout << (*it) << " ";
    }
	std::cout << std::endl;

    return nums;
}


int main()
{
	int n;
	std::cout << "Enter the number of elements\n";
	std::cin >> n;

	Vector<int> ob(n);
	ob.genElements();
	ob.printVector();
	ob.getElement(2);

	ob.pushBack(9);
	ob.popBack();
	ob.printVector();

	std::unordered_set<int> nums = setOfNumbers(ob);

	return 0;
}