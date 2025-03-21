#include "s3k.h"

const char *s3k_err2str(s3k_err_t err) {
  switch (err) {
  case S3K_SUCCESS:
    return "SUCCESS";
  case S3K_ERR_EMPTY:
    return "EMPTY";
  case S3K_ERR_SRC_EMPTY:
    return "SRC_EMPTY";
  case S3K_ERR_DST_OCCUPIED:
    return "DST_OCCUPIED";
  case S3K_ERR_INVALID_INDEX:
    return "INVALID_INDEX";
  case S3K_ERR_INVALID_DERIVATION:
    return "INVALID_DERIVATION";
  case S3K_ERR_INVALID_MONITOR:
    return "INVALID_MONITOR";
  case S3K_ERR_INVALID_PID:
    return "INVALID_PID";
  case S3K_ERR_INVALID_STATE:
    return "INVALID_STATE";
  case S3K_ERR_INVALID_PMP:
    return "INVALID_PMP";
  case S3K_ERR_INVALID_SLOT:
    return "INVALID_SLOT";
  case S3K_ERR_INVALID_SOCKET:
    return "INVALID_SOCKET";
  case S3K_ERR_INVALID_SYSCALL:
    return "INVALID_SYSCALL";
  case S3K_ERR_INVALID_REGISTER:
    return "INVALID_REGISTER";
  case S3K_ERR_INVALID_CAPABILITY:
    return "INVALID_CAPABILITY";
  case S3K_ERR_NO_RECEIVER:
    return "NO_RECEIVER";
  case S3K_ERR_PREEMPTED:
    return "PREEMPTED";
  case S3K_ERR_TIMEOUT:
    return "TIMEOUT";
  case S3K_ERR_SUSPENDED:
    return "SUSPENDED";
  default:
    return "UNKNOWN";
  }
}
