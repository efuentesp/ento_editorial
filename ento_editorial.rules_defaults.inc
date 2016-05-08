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
  return $items;
}
