#include "experimental-mpi.h"

int
MPI_Comm_create_keyval(MPI_Comm_copy_attr_function* comm_copy_attr_fn,
                       MPI_Comm_delete_attr_function* comm_delete_attr_fn,
                       int* comm_keyval,
                       void* extra_state)
{
  return 0;
}

int
MPI_COMM_NULL_COPY_FN(MPI_Comm oldcomm,
                      int comm_keyval,
                      void* extra_state,
                      void* attribute_val_in,
                      void* attribute_val_out,
                      int* flag)
{
  *flag = 0;
  return 0;
}