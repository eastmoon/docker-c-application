# Install common tools
apt-get update -y && \
apt-get install -y  --no-install-recommends \
    apt-transport-https \
    software-properties-common \
    ca-certificates \
    libcurl4 \
    wget \
    rsync

# Install complier tools
apt-get update -y && \
apt-get install -y  --no-install-recommends \
    build-essential \
    gcc \
    g++ \
    python-dev \
    make \
    cmake
