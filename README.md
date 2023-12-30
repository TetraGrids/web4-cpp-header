# Time and Space Antelope Smart Contract Utilities 🌍⏰

This allows you to write contracts using common names instead of country codes, and ensures compatibilities when interacting with ISO 3166 (Alpha-2 and Alpha-3 [two and three lette codes]) nations and third-party contracts who also use this convention, like [Tetra](https://github.com/TetraGrids), and [cXc's Metadata Standards](https://github.com/currentxchange/WAX-NFT-Metadata-Standards).

The intention behind this release is to share a useful component in creting global grids of connection. 

You could use the space data to **validate the name of a country code**, and the time data to create a gamified **cosmomimetic rewards system**. 

This was created on-route to the upcoming RA system by [tetra.earth](https://tetra.earth)

*All .hpp files are in the `include` directory.*

## Contents 📁
1. [Countries Enumeration (`countries.hpp`)](#countries-enumeration)
2. [Continents Enumeration (`continents.hpp`)](#continents-enumeration)
3. [Time Enumeration (`time.hpp`)](#time-enumeration)
4. [Getting Started](#getting-started)
5. [License](#license)

### Countries Enumeration (`countries.hpp`) 🌍
The `countries.hpp` header provides a comprehensive enumeration of countries (`Countries_ISO3`) using ISO 3166-1 alpha-3 country codes.

#### Key Features:
- **Cross-Contract Compatibility**: Enum values are explicitly numbered for consistent cross-contract compatibility.
- **Comprehensive Country List**: Includes a wide range of countries, each represented by their ISO 3166-1 alpha-3 codes.

#### Usage in EOSIO Smart Contract:
```cpp
#include "countries.hpp"

// Example: Retrieving a country code
Countries_ISO3 country_code = Countries_ISO3::USA; // Retrieves the code for USA

// Action demonstrating the use of country code
[[eosio::action]]
void showCountryCode() {
    Countries_ISO3 country_code = Countries_ISO3::FRA; // Code for France
    eosio::print("Country Code: ", static_cast<int>(country_code));
}
```

### Continents Enumeration (`continents.hpp`) 🌐
The `continents.hpp` header includes an enumeration of continents (`Continents`), providing a straightforward way to categorize geographical data.

#### Key Features:
- **Simple and Efficient**: Easy-to-use enumeration of all the continents.
- **Versatile Usage**: Suitable for geographic categorization and analysis.

#### Usage in EOSIO Smart Contract:
```cpp
#include "continents.hpp"

// Example: Retrieving a continent
Continents continent = Continents::EUROPE; // Retrieves Europe

// Action demonstrating the use of continent enumeration
[[eosio::action]]
void showContinent() {
    Continents continent = Continents::ASIA; // Selects Asia
    eosio::print("Selected Continent: ", static_cast<int>(continent));
}
```

### Time Enumeration (`time.hpp`) ⏰
The `time.hpp` header includes enumerations for common time spans, making time management in contracts more intuitive.

It also includes celestial cycles for the solar system to use in biomimetic tokenomics.

#### Key Features:
- **Varied Time Units**: Ranges from seconds to years for flexible time calculations.
- **Simplified Time Handling**: Streamlines time-related operations in contracts.

#### Usage in EOSIO Smart Contract:
```cpp
#include "time.hpp"

// Example: Retrieving a time span value
In time_span = In::Hour; // Retrieves the value for an hour (3600 seconds)

// Action demonstrating the use of time span
[[eosio::action]]
void showTimeSpan() {
    In time_span = In::Day; // Value for a day (86400 seconds)
    eosio::print("Time Span in seconds: ", static_cast<int>(time_span));
}
```

## Getting Started 🚀
To begin, clone this repository and include the necessary headers in your Antelope smart contract.


## License 📜
This project is under the MIT License - see the [LICENSE](LICENSE.md) file for details.


This was created in coordination with [cXc.world](https://cxc.world) and [WAX Labs](https://labs.wax.io/proposals/84)
