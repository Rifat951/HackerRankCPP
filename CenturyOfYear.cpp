int solution(int year) {

    //   1 - 100 --- 1
    //    101 - 200 -- 2
    int y = 0;
    if(year >= 1 && year <= 100){
        y = 1;
    }
    else if(year >= 101 && year <= 200){
        y = 2;
    }
        else if(year >= 201 && year <= 300){
        y = 3;
    }
        else if(year >= 301 && year <= 400){
        y = 4;
    }
        else if(year >= 401 && year <= 500){
        y = 5;
    }
        else if(year >= 501 && year <= 600){
        y = 6;
    }
        else if(year >= 601 && year <= 700){
        y = 7;
    }
        else if(year >= 701 && year <= 800){
        y = 8;
    }
        else if(year >= 801 && year <= 900){
        y = 9;
    }
        else if(year >= 901 && year <= 1000){
        y = 10;
    }
        else if(year >= 1001 && year <= 1100){
        y = 11;
    }
        else if(year >= 1101 && year <= 1200){
        y = 12;
    }
        else if(year >= 1201 && year <= 1300){
        y = 13;
    }
        else if(year >= 1301 && year <= 1400){
        y = 14;
    }
        else if(year >= 1401 && year <= 1500){
        y = 15;
    }
        else if(year >= 1501 && year <= 1600){
        y = 16;
    }
        else if(year >= 1601 && year <= 1700){
        y = 17;
    }
        else if(year >= 1701 && year <= 1800){
        y = 18;
    }
        else if(year >= 1801 && year <= 1900){
        y = 19;
    }
    else if(year >= 1901 && year <= 2000){
        y = 20;
    }
    else if(year >= 2000){
        y = 21;
    }
    return y;
}
