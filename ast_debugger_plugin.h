#ifndef AST_DEBUGGER_PLUGIN_H
#define AST_DEBUGGER_PLUGIN_H

#include "core/object/object.h"
#include "editor/plugins/editor_plugin.h"

#ifdef TOOLS_ENABLED

class ASTDebuggerPlugin : public EditorPlugin {
	GDCLASS(ASTDebuggerPlugin, EditorPlugin);

protected:
	static void _bind_methods();
	void _notification(int p_what);

private:
	void _on_menu_pressed();
};

#endif // TOOLS_ENABLED
#endif // AST_DEBUGGER_PLUGIN_H
