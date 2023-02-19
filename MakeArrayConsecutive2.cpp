int solution(vector<int> statues) {

    // sort the array
    // iterate last to first element of the array
    // compare array and find out how many elements are missing or extra
    // basically count of extra elements
    
    int val = 0;
    //int n  = sizeof(arr) / sizeof(arr[0]);
    //sort(arr , arr + n);
    sort(statues.begin(), statues.end());
    
    for (int x = 0; x <= statues.size()-1; x++) {
        //cout << arr[x] << endl;
        
        // subtract next element from previous element
        if(statues[x+1] - statues[x] > 1){
            val = val + ((statues[x+1] - statues[x]) - 1);
        }
    
    }
    return val;

}


/*When you calculate the difference between the values and you take off 1 you'll have how much numbers should be in the middle.
For example:
[2,5,6]
if you do: 5-2 = 3

3 is the difference but you need the quantity of the numbers in the middle of the difference which means that you can't include the number 5, so you just take it off (3-1 = 2) and then you keep the result in a variable (n in my case) . */
