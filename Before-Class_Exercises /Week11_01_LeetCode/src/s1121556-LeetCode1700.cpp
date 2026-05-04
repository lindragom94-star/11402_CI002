class Solution {
public:
    bool flag;
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int c=0;
        for(int i=0;i<sandwiches.size();i++){
            flag = false;
            for(int j=0;j<students.size();j++){
                if(students[j]==2){
                    continue;
                }
                if(sandwiches[i]==students[j]){
                    students[j]=2;
                    flag=true;
                    break;
                }
                else{
                    flag=false;
                    continue;
                }
            }
            if(!flag){
                break;
            }
        }
        for(int k=0;k<students.size();k++){
            if(students[k]!=2){
                c+=1;
            }
        }
        return c;
    }
};
