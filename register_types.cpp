#include "register_types.h"
#include "core/object/class_db.h"
#include "ast_dumper.h"

#ifdef TOOLS_ENABLED
#include "editor/editor_node.h"
#include "ast_dumper_plugin.h"

static void _editor_init() {
    EditorNode::get_singleton()->add_editor_plugin(memnew(ASTDumperPlugin));
}
#endif

void initialize_ast_dumper_module(ModuleInitializationLevel p_level) {
    if (p_level == MODULE_INITIALIZATION_LEVEL_SCENE) {
        ClassDB::register_class<ASTDumper>();
    }

    if (p_level == MODULE_INITIALIZATION_LEVEL_EDITOR) {
#ifdef TOOLS_ENABLED
        EditorNode::add_init_callback(_editor_init);
#endif
    }
}

void uninitialize_ast_dumper_module(ModuleInitializationLevel p_level) {
}
