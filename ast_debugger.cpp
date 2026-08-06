#include "ast_debugger.h"
#include "core/object/class_db.h"
#include "core/string/print_string.h"

void ASTDebugger::_bind_methods() {
	ClassDB::bind_method(D_METHOD("hello_world"), &ASTDebugger::hello_world);
}

void ASTDebugger::hello_world() {
	print_line("hello ast debugger!");
}

ASTDebugger::ASTDebugger() { }
