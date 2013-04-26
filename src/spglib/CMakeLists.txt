set( spglib_SRCS
cell.c
debug.c
hall_symbol.c
kpoint.c
lattice.c
mathfunc.c
pointgroup.c
primitive.c
refinement.c
sitesym_database.c
site_symmetry.c
spacegroup.c
spg_database.c
spglib.c
spglib_f.c
spin.c
symmetry.c
)

add_library(spglib STATIC ${spglib_SRCS})
# Suppress spglib warnings
set_target_properties( spglib PROPERTIES
		       COMPILE_FLAGS "-w")
