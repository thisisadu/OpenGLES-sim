#ifndef CONTEXT_LINK_GLAPI_H_INCLUDED
#define CONTEXT_LINK_GLAPI_H_INCLUDED


#define CG_IN	1
#define CG_OUT	2

#define CG_IN_ATTR 				1
#define CG_IN_UNIFORM 			2
#define CG_IN_UNIFORM_TEXTURE 	3
#define CG_OUT_ATTR 			11
#define CG_OUT_POSITION 		12
#define CG_OUT_COLOR 			13

///Program Link Status
#define LS_NO_ERROR					0
#define LS_SHADER_MISSING			1
#define LS_ATTR_EXCEED				2
#define LS_UNIFORM_EXCEED			3
#define LS_UNIFORM_STORAGE_EXCEED	4
#define LS_MAIN_FUNCTION_MISSING	5
#define LS_VS_FS_VARRYING_UNMATCH	6
#define LS_DECLARATION_UNRESOLVED	7
//#define /*shared global is declared in two different type */
#define LS_SHADER_ISNOTCOMPILED		9

#endif // CONTEXT_LINK_GLAPI_H_INCLUDED
