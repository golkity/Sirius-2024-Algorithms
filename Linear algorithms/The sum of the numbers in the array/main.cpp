#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;++i){
        cin>>a[i];
    }
    int max_sum = -1000000;
    int current_sum = 0;
    int start = 0;
    int best_start = 0;
    int best_end = 0;
    int temp_start = 0;

    for(int i =0;i<n;++i){
        if(current_sum<=0){
            current_sum = a[i];
            temp_start = i;
        }else{
            current_sum+= a[i];
        }
        if(current_sum>max_sum ||(current_sum == max_sum &&(i<best_end || (i == best_end && temp_start>best_start)))){
            max_sum = current_sum;
            best_start = temp_start;
            best_end = i;
        }
    }

    cout<<best_start+1<<endl<<best_end+1<<endl;


    return 0;
}
