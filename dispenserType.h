class dispenserType
{
public:
        int count();
            //Function to show the number of the items in the machine
            //Post-Condition: The value of the data member numberOfItems is returned.


        int produ
        ctCost();
            //Function to show the cost of the item.
            //The value of the data member cost is returned.
            //Post-Condition: The value of cost is returned.

        void makeSale();
            //Function to reduce the number of items by 1
            //Post-Condition: numberOfItems--

        dispenserType(int setNoOfItems = 50, int setCost = 50);
            //Constructor to set the cost and the number of items in the dispenser specified by the user.
            //Post-Condition: numberOfItems = setNoOfItems; cost = setCost
            //If no value is specified for the parameter,
            //then it's default value is assigned to the corresponding data member.
    private:
        int numberOfItems; //Variable to store the number of items.
        int cost;//Variable to store the cost of items.

};
