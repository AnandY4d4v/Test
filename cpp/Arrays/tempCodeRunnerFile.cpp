  int ones,zero,twos;
        zero=ones=twos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }else if(nums[i]==1){
                ones++;
            }else{
                twos++;
            }
        }
        int i =0;
        while(zero--){
            nums[i]=0;
            i++;
        }
        while(ones--){
            nums[i]=1;
            i++;
        }
        while(twos--){
            nums[i]=2;
            i++;