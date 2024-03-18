int main()
{
    std::vector<int> myList;
    myList.push_back(3);
    myList.push_back(7);
    myList.push_back(1);
    myList.push_back(9);
    myList.push_back(4);

    std::vector<int>::iterator begin = myList.begin();
    std::vector<int>::iterator end = myList.end();

    int maxVal =  find_max<std::vector<int>::iterator, int>(begin, end);

   
    std::cout << "Maximum value in the list: " << maxVal << std::endl;

    return 0;
}