int romanToInt(char * s){
        int i=0,sum=0;
        
    while(s[i]!=NULL){
        if(s[i]=='I'){
            if(s[i+1] == 'V') {sum += 4; i+=2;}
            else if(s[i+1] == 'X') {sum += 9; i+=2;}
            else {sum += 1; i++;}
            
        }
        if(s[i]=='X'){
            if(s[i+1] == 'L') {sum += 40;i+=2;}
            else if(s[i+1] == 'C') {sum += 90;i+=2;}
            else {sum += 10;i++;}
            
        }
        if(s[i]=='C'){
            if(s[i+1] == 'D') {sum += 400;i+=2;}
            else if(s[i+1] == 'M') {sum += 900;i+=2;}
            else {sum += 100;i++;}
        }
        
        if(s[i]=='V'){
            sum += 5;
            i++;
        }
        
        if(s[i]=='L'){
            sum += 50;
            i++;
        }
        
        if(s[i]=='D'){
            sum += 500;
            i++;
        }
        
        if(s[i]=='M'){
            sum += 1000;
            i++;
        }
        
    }
    return sum;
}
