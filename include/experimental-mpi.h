#ifndef _EXPERIMENTAL_FAKEMPI_H
#define _EXPERIMENTAL_FAKEMPI_H

#include "lammps-mpi.h"

/** These are my additions to the existing LAMMPS MPI Stub.
 * I place them in separate files to clearly state that they
 * are much less mature and might be erroneous.
 */

// Constants
#define MPI_MAX_ERROR_STRING 256

// Declarations
#define MPI_Aint int
#define MPI_Info int

// Callback Function Prototypes
typedef int
MPI_Comm_copy_attr_function(MPI_Comm, int, void*, void*, void*, int*);
typedef int
MPI_Comm_delete_attr_function(MPI_Comm, int, void*, void*);

// Functions
int
MPI_Comm_create_keyval(MPI_Comm_copy_attr_function*,
                       MPI_Comm_delete_attr_function*,
                       int*,
                       void*);

#endif // _EXPERIMENTAL_FAKEMPI_H
