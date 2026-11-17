# Runtime for the Linux builds of Sony's ee-gcc (32-bit i386 programs from 1999-2004) on any Docker host.
# The compilers themselves are not in the image: they live in tools/eegcc/<version>/ (scripts/get_tools.py --eegcc)
# and the checkout is mounted at its own path (scripts/eegcc/eegcc.py starts the container).
#
#     docker build --platform linux/amd64 -t budokai3-eegcc scripts/eegcc
#
# On Apple Silicon this runs under Rosetta or QEMU (colima's amd64 emulation).
FROM debian:bookworm-slim
RUN dpkg --add-architecture i386 \
 && apt-get update \
 && apt-get install -y --no-install-recommends libc6:i386 \
 && rm -rf /var/lib/apt/lists/*
CMD ["sleep", "infinity"]
