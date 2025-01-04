char* timeConversion(char* s) 
{
    int hour;
    static char convertedTime[9]; 
    
    sscanf(s, "%2d", &hour); 
    if (s[8] == 'A') 
    { 
        if (hour == 12) 
        {
            hour = 0; 
        }
    } else {
        if (hour != 12) 
        {
            hour += 12; 
        }
    }

    sprintf(convertedTime, "%02d:%c%c:%c%c", hour, s[3], s[4], s[6], s[7]);

    return convertedTime; 
}