/*==============================================================================
Project: LiFe
Theme: Apex Method (Predictor + Corrector)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Author(s): Leonid B. Sokolinsky, Irina M. Sokolinskaya
This source code has been produced with using BSF-skeleton
==============================================================================*/
//-------------------------- Compilation Modes -----------------------
//#define PP_DEBUG
//=========================== Problem Parameters =========================
#define PP_MAX_N 50				// Maximal Space Dimension
#define PP_MAX_NUM_OF_RND_INEQUALITIES (PP_MAX_N)			// Maximal Number of random inequalities		|
#define PP_MAX_M (2*PP_MAX_N + PP_MAX_NUM_OF_RND_INEQUALITIES + 1)	// Maximal Total number of inequalities
#define PP_MAX_MM (PP_MAX_M + 2 * (PP_MAX_M - 2))	// Maximal number of inequalities including additional
#define PP_SF 200			// Scale factor
#define PP_DIST_TO_APEX (PP_MAX_N*PP_SF*100000)// Distance to Apex Point 

#define PP_EPS_RELAX		1E-11			// Precision for relaxation
#define PP_EPS_SHIFT		1E-10
#define PP_EPS_IN			1E-1
#define PP_EPS_ZERO			1E-5
#define PP_EPS_DIR			1E-3
#define PP_EPS_OBJECTIVE	1E-1
#define PP_MAX_NUM_SHIFTS_SAME_LENGTH 5	// Maximal number of shifts with the same length
#define PP_MAX_NUM_SEQ_SHIFTS 500		// Maximal number of sequential shifts

#define PP_MAX_ITER_COUNT	10000000					// Maximal count of iterations
#define PP_OBJECTIVE_VECTOR_LENGTH ((double)PP_SF/200)	// Length of Objective Vector
#define PP_START_SHIFT_LENGTH (PP_SF/20)				// Start length of shift vector

//-------------------------- Outpoot Parameters ---------------------------
#define PP_OUTPUT_LIMIT	8	// Number of Elements to output
//#define PP_MATRIX_OUTPUT	// To output Matrix
//#define PP_SETW 14
#define PP_SETW 12
//-------------------------- Jobs  -----------------------
#define PP_JOB_PSEUDOPOJECTION	0 
#define PP_JOB_CHECK			1		
#define PP_JOB_HYPERPLANE_TOUCH	2
//-------------------------- Process states --------------------------
#define PP_STATE_START						0
#define PP_STATE_FIND_BEGINNING_OF_PATH		1
#define PP_STATE_DETERMINE_DIRECTION		2
#define PP_STATE_MOVE_AND_CHECK				3
// ------------------- Compatibility with LPP-Generator ---------------------
#define PP_ALPHA 200										// Length of hypercube edge
#define PP_THETA (PP_ALPHA/2)								// Radius of large hypersphere
#define PP_RHO (PP_THETA/2)									// Radius of small hypersphere