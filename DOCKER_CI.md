# Docker and CI/CD Setup for libV

This repository now includes Docker containerization and automated CI/CD using GitHub Actions.

## Docker

### Building the Docker Image

```bash
docker build -t libv .
```

### Running Tests in Docker

```bash
# Build the library
docker run --rm libv make

# Build and run tests
docker run --rm libv sh -c "chmod +x ci_test.sh && ./ci_test.sh"

# Run norminette (code style checker)
docker run --rm libv norminette $(find . -name "*.c" -o -name "*.h" | grep -v test)
```

## CI/CD Pipeline

The GitHub Actions workflow (`.github/workflows/ci.yml`) automatically runs on:
- Push to main/master branches
- Pull requests to main/master branches

### Pipeline Steps

1. **Linting**: Runs norminette to check 42 coding standards
2. **Building**: Compiles the library and test executable
3. **Testing**: Runs comprehensive tests to verify functionality
4. **Docker Testing**: Builds and tests the Docker image
5. **Cleanup**: Removes build artifacts

### Files Added

- `Dockerfile` - Container definition with Ubuntu, build tools, and norminette
- `.dockerignore` - Excludes unnecessary files from Docker build
- `.github/workflows/ci.yml` - GitHub Actions CI/CD pipeline
- `ci_test.sh` - Comprehensive test script for automated testing

## Usage

The CI/CD pipeline will automatically run when you:
1. Push code to the main branch
2. Create a pull request
3. Update an existing pull request

Check the Actions tab in GitHub to see the pipeline results.