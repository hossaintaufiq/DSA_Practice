#ifndef  TIMESTAMP_H
#define  TIMESTAMP_H


class timeStamp
{
   private:
       int seconds, minutes, hours;

   public:
    timeStamp();
    timeStamp(int seconds,int minutes, int hours );

    void setSeconds(int seconds);
    void setMinutes(int minutes);
    void setHours(int hours);

    int getSeconds();
    int getMinutes();
    int getHours();

    void print();

   friend bool operator > (timeStamp &obj1, timeStamp &obj2);
   friend bool operator == (timeStamp &obj1, timeStamp &obj2);
   friend bool operator != (timeStamp &obj1, timeStamp & obj2);
   friend bool operator < (timeStamp &obj1, timeStamp &obj2);


};

#endif //  TIMESTAMP_H
