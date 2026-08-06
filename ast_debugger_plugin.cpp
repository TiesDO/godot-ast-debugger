#include "ast_debugger_plugin.h"
#include "core/object/callable_mp.h"
#include "scene/main/node.h"

#ifdef TOOLS_ENABLED
#include "ast_debugger.h"

void ASTDebuggerPlugin::_bind_methods() {};

void ASTDebuggerPlugin::_notification(int p_what) {
	if (p_what == NOTIFICATION_ENTER_TREE) {
		add_tool_menu_item("AST Debugger: Hello", callable_mp(this, &ASTDebuggerPlugin::_on_menu_pressed));
	} else if (p_what == NOTIFICATION_EXIT_TREE) {
		remove_tool_menu_item("AST Debugger: Hello");
	}
};

void ASTDebuggerPlugin::_on_menu_pressed() {
	print_line("Tools menu item clicked!");

	Ref<ASTDebugger> debugger;
	debugger.instantiate();
	debugger->hello_world();
};

#endif // TOOLS_ENABLED
