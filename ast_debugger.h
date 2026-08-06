#ifndef AST_DEBUGGER_H
#define AST_DEBUGGER_H

#include "core/object/object.h"
#include "core/object/ref_counted.h"

class ASTDebugger : public RefCounted {
	GDCLASS(ASTDebugger, RefCounted);

protected:
	static void _bind_methods();

public:
	void hello_world();
	ASTDebugger();
};

#endif // AST_DEBUGGER_H
