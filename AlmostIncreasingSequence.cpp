bool solution(vector<int> sequence) {
    
    if (sequence.size() == 1) return true;

    int count = 0;
    for (int i = 0; i < sequence.size() - 1; i++){
        if (sequence[i + 1] <= sequence[i]){
            
            if (sequence[i+1] > sequence[i-1] || i == 0){
                sequence.erase(sequence.begin() + i);
            }
            else if (sequence[i+1] <= sequence[i-1]){
                sequence.erase(sequence.begin() + (i+1));
            }

        break;
        }
    }
    for (int i = 0; i < sequence.size() - 1; i++){
    if (sequence[i + 1] <= sequence[i]){
        return false;
        }
    }

return true; 
    

}
