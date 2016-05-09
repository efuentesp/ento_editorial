<?php
/**
 * @file
 * ento_editorial.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ento_editorial_default_rules_configuration() {
  $items = array();
  $items['rules_crear_usuario_administrador_escuela'] = entity_import('rules_config', '{ "rules_crear_usuario_administrador_escuela" : {
      "LABEL" : "Crear Usuario del Administrador de la Escuela",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "escuela", "usuario" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--escuela" : { "bundle" : "escuela" } },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "user",
              "param_name" : [ "node:field-escuela-admin-email" ],
              "param_mail" : [ "node:field-escuela-admin-email" ]
            },
            "PROVIDE" : { "entity_created" : { "usuario_creado" : "Usuario creado" } }
          }
        },
        { "data_set" : { "data" : [ "usuario-creado:roles:0" ], "value" : "6" } },
        { "data_set" : { "data" : [ "usuario-creado:status" ], "value" : "1" } },
        { "entity_save" : { "data" : [ "usuario-creado" ], "immediate" : "1" } },
        { "data_set" : {
            "data" : [ "node:field-escuela-admin-usuario" ],
            "value" : [ "usuario-creado" ]
          }
        },
        { "user_send_account_email" : {
            "account" : [ "usuario-creado" ],
            "email_type" : "register_admin_created"
          }
        }
      ]
    }
  }');
  $items['rules_crear_usuario_de_un_docente'] = entity_import('rules_config', '{ "rules_crear_usuario_de_un_docente" : {
      "LABEL" : "Crear Usuario de un Docente",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "docente", "usuario" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--docente" : { "bundle" : "docente" } },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "user",
              "param_name" : [ "node:field-docente-email" ],
              "param_mail" : [ "node:field-docente-email" ]
            },
            "PROVIDE" : { "entity_created" : { "usuario_creado" : "Usuario creado" } }
          }
        },
        { "data_set" : { "data" : [ "usuario-creado:roles:0" ], "value" : "4" } },
        { "data_set" : { "data" : [ "usuario-creado:status" ], "value" : "1" } },
        { "entity_save" : { "data" : [ "usuario-creado" ], "immediate" : "1" } },
        { "data_set" : {
            "data" : [ "node:field-docente-usuario" ],
            "value" : [ "usuario-creado" ]
          }
        },
        { "user_send_account_email" : {
            "account" : [ "usuario-creado" ],
            "email_type" : "register_admin_created"
          }
        }
      ]
    }
  }');
  $items['rules_crear_usuario_evaluador'] = entity_import('rules_config', '{ "rules_crear_usuario_evaluador" : {
      "LABEL" : "Crear Usuario de un Evaluador",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "evaluador", "usuario" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--evaluador" : { "bundle" : "evaluador" } },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "user",
              "param_name" : [ "node:field-evaluador-email" ],
              "param_mail" : [ "node:field-evaluador-email" ]
            },
            "PROVIDE" : { "entity_created" : { "usuario_creado" : "Usuario creado" } }
          }
        },
        { "data_set" : { "data" : [ "usuario-creado:roles:0" ], "value" : "7" } },
        { "data_set" : { "data" : [ "usuario-creado:status" ], "value" : "1" } },
        { "entity_save" : { "data" : [ "usuario-creado" ], "immediate" : "1" } },
        { "data_set" : {
            "data" : [ "node:field-evaluador-usuario" ],
            "value" : [ "usuario-creado" ]
          }
        },
        { "user_send_account_email" : {
            "account" : [ "usuario-creado" ],
            "email_type" : "register_admin_created"
          }
        }
      ]
    }
  }');
  $items['rules_editar_usuario_administrador_escuela'] = entity_import('rules_config', '{ "rules_editar_usuario_administrador_escuela" : {
      "LABEL" : "Editar Usuario del Administrador de la Escuela",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "admin", "usuario" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--escuela" : { "bundle" : "escuela" } },
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "user",
              "id" : [ "node-unchanged:field-escuela-admin-usuario:uid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "usuario_asignado" : "Usuario asignado" } }
          }
        },
        { "data_set" : {
            "data" : [ "usuario-asignado:name" ],
            "value" : [ "node:field-escuela-admin-email" ]
          }
        },
        { "data_set" : {
            "data" : [ "usuario-asignado:mail" ],
            "value" : [ "node:field-escuela-admin-email" ]
          }
        },
        { "entity_save" : { "data" : [ "usuario-asignado" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_editar_usuario_de_un_docente'] = entity_import('rules_config', '{ "rules_editar_usuario_de_un_docente" : {
      "LABEL" : "Editar Usuario de un Docente",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "docente", "usuario" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--docente" : { "bundle" : "docente" } },
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "node-unchanged:field-docente-usuario:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "usuario_asignado" : "Usuario asignado" } }
          }
        },
        { "data_set" : {
            "data" : [ "usuario-asignado:name" ],
            "value" : [ "node:field-docente-email" ]
          }
        },
        { "data_set" : {
            "data" : [ "usuario-asignado:mail" ],
            "value" : [ "node:field-docente-email" ]
          }
        },
        { "entity_save" : { "data" : [ "usuario-asignado" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_editar_usuario_evaluador'] = entity_import('rules_config', '{ "rules_editar_usuario_evaluador" : {
      "LABEL" : "Editar Usuario de un Evaluador",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "evaluador", "usuario" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--evaluador" : { "bundle" : "evaluador" } },
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "user",
              "id" : [ "node-unchanged:field-evaluador-usuario:uid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "usuario_asignado" : "Usuario asignado" } }
          }
        },
        { "data_set" : {
            "data" : [ "usuario-asignado:name" ],
            "value" : [ "node:field-evaluador-email" ]
          }
        },
        { "data_set" : {
            "data" : [ "usuario-asignado:mail" ],
            "value" : [ "node:field-evaluador-email" ]
          }
        },
        { "entity_save" : { "data" : [ "usuario-asignado" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_eliminar_usuario_administrador_escuela'] = entity_import('rules_config', '{ "rules_eliminar_usuario_administrador_escuela" : {
      "LABEL" : "Eliminar Usuario del Administrador de la Escuela",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "admin", "usuario" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_delete--escuela" : { "bundle" : "escuela" } },
      "DO" : [
        { "entity_delete" : { "data" : [ "node:field-escuela-admin-usuario" ] } }
      ]
    }
  }');
  $items['rules_eliminar_usuario_de_un_docente'] = entity_import('rules_config', '{ "rules_eliminar_usuario_de_un_docente" : {
      "LABEL" : "Eliminar Usuario de un Docente",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "docente", "usuario" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_delete--docente" : { "bundle" : "docente" } },
      "DO" : [ { "entity_delete" : { "data" : [ "node:field-docente-usuario" ] } } ]
    }
  }');
  $items['rules_eliminar_usuario_de_un_evaluador'] = entity_import('rules_config', '{ "rules_eliminar_usuario_de_un_evaluador" : {
      "LABEL" : "Eliminar Usuario de un Evaluador",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "evaluador", "usuario" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_delete--evaluador" : { "bundle" : "evaluador" } },
      "DO" : [ { "entity_delete" : { "data" : [ "node:field-evaluador-usuario" ] } } ]
    }
  }');
  return $items;
}
