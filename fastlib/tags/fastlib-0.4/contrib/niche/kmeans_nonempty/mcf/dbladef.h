/**************************************************************************
Contains modul DBLADEF.H of ZIB optimizer MCF

AUTHOR: Andreas Loebel

This software was developed at ZIB Berlin. Maintenance and revisions 
on responsibility of Dr. Andreas Loebel

Dr. Andreas Loebel
Ortlerweg 29b, 12207 Berlin

Konrad-Zuse-Zentrum fuer Informationstechnik Berlin (ZIB)
Scientific Computing - Optimization
Takustr. 7, 14195 Berlin-Dahlem

Copyright (c) 1997-2000 ZIB.            All rights reserved.
Copyright (c) 2000-2003 ZIB & Loebel.   All rights reserved.
**************************************************************************/
/*  LAST EDIT: Tue Jun  3 10:40:32 2003 by Andreas Loebel (opt0.zib.de)  */
#ident "$Id: dbladef.h,v 1.1.1.1 2003/06/03 12:06:54 bzfloebe Exp $"


#ifndef _DBLADEF_H
#define _DBLADEF_H


#include "mcfdefs.h"


#define MCF_DUAL_BLA_PARAMETERS \
    long , \
    MCF_node_p, \
    MCF_node_p, \
    MCF_flow_p

#define MCF_DECLARE_DUAL_BLA_PARAMETERS \
    long n, \
    MCF_node_p nodes, \
    MCF_node_p stop_nodes, \
    MCF_flow_p delta


#endif
