/*/ 

This header contains common time spans stored as enumerated lists to use in C++ contracts for WAX blockchains.

/*/

enum class In {
    /*/ --- Gregorian Times --- /*/
    Second = 1,                  // Second
    Minute = 60,                 // Minute
    FiveMinutes = 300,           // 5 Minutes
    TenMinutes = 600,            // 10 Minutes
    FifteenMinutes = 900,        // 15 Minutes
    Hour = 3600,                 // Hour
    Day = 86400,                 // Day
    Week = 604800,               // Week
    Month = 2592000,             // Month (approximated as 30 days)
    Year = 31536000              // Year (approximated as 365 days, ignoring leap years)
    /*/ --- Celestial Orbits --- /*/
    MercuryOrbit = 57600000,     // One orbit of Mercury around the Sun (approximated as 57.6 days)
    VenusOrbit = 2432000000,      // One orbit of Venus around the Sun (approximated as 243.2 days)
    MarsOrbit = 668560000,        // One orbit of Mars around the Sun (approximated as 668.56 days)
    JupiterOrbit = 13107200000,   // One orbit of Jupiter around the Sun (approximated as 1310.72 days)
    SaturnOrbit = 29920000000,    // One orbit of Saturn around the Sun (approximated as 2992 days)
    UranusOrbit = 84372000000,    // One orbit of Uranus around the Sun (approximated as 84372 days)
    NeptuneOrbit = 165680000000,  // One orbit of Neptune around the Sun (approximated as 16568 days)
    AsteroidBeltOrbit = 388800000 // Approx orbit of an asteroid in the main belt (about 4 years)
};
