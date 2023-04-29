#include "doLRC.h"

/**
 * Applies regexString to targetString.
 * Returns true if regex pattern matches to string. False otherwise.
 */
boolean matchRegex(char *targetString, char *regexString) {
    MatchState ms;
    char regexMatch;

    ms.Target(targetString);
    regexMatch = ms.Match(regexString);
    if (regexMatch == REGEXP_MATCHED) {
        return true;
    }
    else if (regexMatch == REGEXP_NOMATCH) {
        return false;
    }
    else {
        return false;
    }
}

/**
 * Returns true if the targetString is a valid timestamp that is a string that follows the pattern [MM:ss.mm])
 * Returns false otherwise.
 * 
 * @see regex syntax at this url: http://www.tads.org/t3doc/doc/sysman/regex.htm
 */
boolean isTimestamp(char *targetString) {
    // http://www.tads.org/t3doc/doc/sysman/regex.htm#wordBoundary
    char timestampRegex1[5] = "%b[]";

    char timestampRegex2[16] = "%d%d:%d%d%p%d%d";

    return (matchRegex(targetString, timestampRegex1) && matchRegex(targetString, timestampRegex2));
}

/**
 * Converts timestamp in milliseconds 
 * [12:34.56]  => 12 minutes, 34 seconds, 5 tenth of seconds, 6 hundreds of seconds.
 *                12 * 60 * 1000 milliseconds +
 *                34 * 1000      milliseconds +
 *                5  * 100       milliseconds +
 *                6  * 10        milliseconds
 */
unsigned long timestampToMillis(const char *timestamp) {
  return    (   (timestamp[1]-'0') * (unsigned long)10 + (timestamp[2]-'0')    ) * (unsigned long)60000
            +
            (   (timestamp[4]-'0') * (unsigned long)10 + (timestamp[5]-'0')    ) * (unsigned long)1000
            +
            (   (timestamp[7]-'0') * (unsigned long)100 + (timestamp[8]-'0') * (unsigned long)10    );
}