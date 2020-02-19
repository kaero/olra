#!/usr/bin/env bash
ENV_DIR=$(dirname $(realpath ${0}))
ROOT_DIR=${ENV_DIR}/root

qemu-arm -L ${ROOT_DIR} $@
