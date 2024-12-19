# HFT Platform

This repository sets the foundation for a high-frequency trading platform.

## Structure
- `src/`: C++ core components (feed handler, order gateway, strategies, utils)
- `python/`: Backtesting, analytics, and data processing scripts
- `kdb/`: kdb+ schema and queries
- `infra/`: Infrastructure as code (Terraform)
- `tests/`: Unit and integration tests
- `ci/`: CI/CD workflows

## Getting Started

1. Build the C++ components:
   ```
   mkdir build && cd build
   cmake ..
   make
   ```

2. Run tests:
   ```
   ctest --output-on-failure
   ```

3. Python requirements:
   ```
   cd python
   pip install -r requirements.txt
   ```

## Next Steps
- Integrate real market data feeds and order gateways.
- Implement strategies in C++ and test them via Python backtests.
- Expand Terraform scripts to provision required infrastructure.
