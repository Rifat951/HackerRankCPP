int solution(vector<vector<int>> matrix) {
    
    int sum = 0;
    for(int i = 0; i<matrix[0].size(); i++){
        for(int j = 0; j<matrix.size(); j++){
                sum += matrix[j][i];
                //System.out.println(matrix[j][i]);
            if(matrix[j][i] == 0)
            break;
            }
        }
    return sum;
}
