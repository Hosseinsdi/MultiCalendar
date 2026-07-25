#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct tarikh {
    long long int yy, mm, dd;
};
int main() {

    int current_time1 = time(0);
    long int seconds_in_year = 365 * 24 * 60 * 60;

    struct tarikh miladi;

    int kabiseM = 0;
    for (int i = 1972; i <= 2023; i += 4) {
        kabiseM++;
    }
    current_time1 -= kabiseM * 24 * 60 * 60;

    miladi.yy = current_time1 / seconds_in_year + 1970;

    long long int remaining_seconds1 = current_time1 % seconds_in_year;

    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
      for (miladi.mm = 1; miladi.mm <= 12; miladi.mm++) {
        int days_in_current_month = days_in_month[miladi.mm];

        if (miladi.mm == 2 && ((miladi.yy % 4 == 0 && miladi.yy % 100 != 0) || miladi.yy % 400 == 0)) {
            days_in_current_month = 29;
        }

        if (remaining_seconds1 < days_in_current_month * 24 * 60 * 60) {
            break;
            } else {
            remaining_seconds1 -= days_in_current_month * 24 * 60 * 60;
        }
    }

    miladi.dd = remaining_seconds1 / (24 * 60 * 60) + 1;
    if((miladi.mm == 1 || miladi.mm == 3 || miladi.mm == 5 || miladi.mm == 7 || miladi.mm == 8 || miladi.mm == 10) && miladi.dd > 31){
                              miladi.dd -= 31;
              }
             else if((miladi.mm == 4 || miladi.mm == 6 || miladi.mm == 9 || miladi.mm == 11) && miladi.dd > 30){
                              miladi.dd -= 30;
              }
              else if(miladi.mm == 2 && miladi.mm > 28){
                              miladi.dd -= 28;
              }
              else if(miladi.mm == 2 && ((miladi.yy % 4 == 0 && miladi.yy % 100 != 0) || miladi.yy % 400 == 0) && miladi.dd > 29){
                              miladi.dd -= 29;
              }
    printf("miladi: \n");
    printf("%d/%d/%d", miladi.mm, miladi.dd, miladi.yy);

    struct tarikh shamsi;
    int current_time2 = time(0);
    int kabiseSH = 0;

    for(int i = 1348; i <= 1402; i++){
            if(i%33 == 1 || i% 33 == 5 || i%33 == 9 || i%33 == 13 || i%33 == 17 || i%33 == 21 || i%33 == 26 || i%33 == 30 )
               kabiseSH++;
     }
     current_time2 -= kabiseSH * 24 * 60 * 60;

      shamsi.yy = current_time2 / seconds_in_year + 1349;
      long long int remaining_seconds2 = current_time2 % seconds_in_year;

      int days_in_monthSH[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 30, 29, 31, 31, 31, 31, 31, 31, 30, 30, 30};

           for(shamsi.mm = 10; shamsi.mm <= 21; shamsi.mm ++){
                int days_in_current_monthSH = days_in_monthSH[shamsi.mm];
                    if(shamsi.mm == 12 && (shamsi.yy%33 == 1 || shamsi.yy% 33 == 5 || shamsi.yy%33 == 9 || shamsi.yy%33 == 13 || shamsi.yy%33 == 17 || shamsi.yy%33 == 21
                                           || shamsi.yy%33 == 26 || shamsi.yy%33 == 30)){
                            days_in_current_monthSH = 30;
                    }
                            if(remaining_seconds2 < days_in_current_monthSH * 24 * 60 * 60){
                                if(shamsi.mm > 12){
                                    shamsi.mm -= 12;
                                    break;
                                }
                            else{
                                break;
                            }
                       }
                else{
                        remaining_seconds2 -= days_in_current_monthSH * 24 * 60 * 60;
                }
         }
              shamsi.dd = remaining_seconds2 / (24 * 60 * 60) + 11;
              if((shamsi.mm == 10 || shamsi.mm == 11 || shamsi.mm == 7 || shamsi.mm == 8 || shamsi.mm == 9) && shamsi.dd > 30){
                              shamsi.dd -= 30;
              }
              else if((shamsi.mm == 1 || shamsi.mm == 2 || shamsi.mm == 3 || shamsi.mm == 4 || shamsi.mm == 5 || shamsi.mm == 6) && shamsi.dd > 31){
                              shamsi.dd -= 31;
              }
              else if(shamsi.mm ==12 && shamsi.dd > 29){
                              shamsi.dd -= 29;
              }
              else if(shamsi.mm == 12 &&(shamsi.yy%33 == 1 || shamsi.yy% 33 == 5 || shamsi.yy%33 == 9 || shamsi.yy%33 == 13 || shamsi.yy%33 == 17 || shamsi.yy%33 == 21
                                           || shamsi.yy%33 == 26 || shamsi.yy%33 == 30)&& shamsi.dd > 30){
                              shamsi.dd -= 30;
              }
                printf("\nshamsi: \n");
                printf("%d/%d/%d", shamsi.yy, shamsi.mm, shamsi.dd);

            struct tarikh qamari;

            int current_time3 = time(0);
            long int seconds_in_yearQ = 354 * 24 * 60 * 60;
            int kabiseQ = 0;

            for(int i = 1389; i <= 1445; i++){
                if(i%30 == 2 || i%30 == 5 || i%30 == 7 || i%30 == 10 || i%30 == 13 || i%30 == 16 ||
                                 i%30 == 18 || i%30 == 21 || i%30 == 24 || i%30 == 26 || i%30 == 29)
                            kabiseQ ++;
            }
            current_time3 -= kabiseQ * 24 * 60 * 60;
            qamari.yy = current_time3 / seconds_in_yearQ + 1390;
            long long int remaining_seconds3 = current_time3 % seconds_in_yearQ;

            int days_in_monthQ[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 30, 29, 30, 29, 30, 29, 30, 29, 30, 29, 30};

            for(qamari.mm = 10; qamari.mm <= 21; qamari.mm ++ ){
                int days_in_current_monthQ = days_in_monthQ[qamari.mm];

                    if(qamari.mm == 12 && (qamari.yy%30 == 2 || qamari.yy%30 == 5 || qamari.yy%30 == 7 || qamari.yy%30 == 10 || qamari.yy%30 == 13 || qamari.yy%30 == 16 ||
                                 qamari.yy%30 == 18 || qamari.yy%30 == 21 || qamari.yy%30 == 24 || qamari.yy%30 == 26 || qamari.yy%30 == 29)){
                            days_in_current_monthQ = 30;
                    }
                            if(remaining_seconds3 < days_in_current_monthQ * 24 * 60 * 60){
                                if(qamari.mm > 12){
                                    qamari.mm -= 12;
                                    break;
                                }
                            else{
                                break;
                            }
                    }
                else{
                        remaining_seconds3 -= days_in_current_monthQ * 24 * 60 * 60;

                }
          }
              qamari.dd = remaining_seconds3 / (24 * 60 * 60) + 1 ;
              if((qamari.mm == 10 || qamari.mm == 12 || qamari.mm == 2 || qamari.mm == 4 || qamari.mm == 6 || qamari.mm == 8) && qamari.dd > 29){
                              qamari.dd -= 29;
              }
              else if((qamari.mm == 11 || qamari.mm == 1 || qamari.mm == 3 || qamari.mm == 5 || qamari.mm == 7 || qamari.mm == 9) && qamari.dd > 30){
                              qamari.dd -=30;
              }
              else if(qamari.mm == 12 &&(qamari.yy%30 == 2 || qamari.yy%30 == 5 || qamari.yy%30 == 7 || qamari.yy%30 == 10 || qamari.yy%30 == 13 || qamari.yy%30 == 16 ||
                                 qamari.yy%30 == 18 || qamari.yy%30 == 21 || qamari.yy%30 == 24 || qamari.yy%30 == 26 || qamari.yy%30 == 29) && qamari.dd > 30){
                              qamari.dd -= 30;
              }
                printf("\nqamari: \n");
                printf("%d/%d/%d", qamari.yy, qamari.mm, qamari.dd);

    return 0;
}
