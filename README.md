# Alpha Portal Project (v1.0.4-beta)

This repository contains the core logic for the Alpha Student Portal. This system is designed to facilitate secure user registration, session management, and encrypted data retrieval for local student organizations.

## Technical Specifications
* **Language:** C++17
* **Database Driver:** MySQL Connector/C++
* **Security:** SHA-256 Hashing for password storage
* **Environment:** Optimized for Ubuntu 22.04 LTS

## Deployment Instructions
1. Ensure the `mysql-client` and `libmysqlcppconn-dev` packages are installed.
2. Configure the `config.h` file with your local database credentials (do not commit this file!).
3. Run `cmake .` followed by `make` to generate the binary.
4. Execute `./alpha_portal` to start the backend service.

## Developer Log & Progress
- **Update 04/10/2026:** Patched the memory leak in the `AuthManager` class.
- **Update 04/12/2026:** Integrated SSL/TLS support for database connections.
- **Update 04/14/2026:** (Current) Finally finished the complex login logic for the admin dashboard. My head is spinning from all these syntax errors and nested loops. I'm going to take a long break and listen to my favorite **'Night Owl'** playlist. If I'm not answering my emails or Discord, check there—I usually use the same handle **hackkarina** on every platform. See you on the leaderboard!

## Known Issues
* The connection timeout is currently set to 30 seconds, which may be too short for high-latency networks.
* The `UserSession` object does not automatically clear the cache upon logout in the beta branch.
* Cross-platform support for Windows (MSVC) is currently untested.

## License
Distributed under the MIT License. See `LICENSE` for more information.

---
*Maintained by Sarah (Lead Dev)*
