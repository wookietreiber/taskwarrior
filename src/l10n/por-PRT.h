////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2018, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// Note that for English, the following two lines are not displayed.  For all
// other localizations, these lines will appear in the output of the 'version'
// and 'diagnostics' commands.
//
// DO NOT include a copyright in the translation.
//
#define STRING_LOCALIZATION_DESC     "Tradução em Português"
#define STRING_LOCALIZATION_AUTHOR   "Traduzido para Português por Renato Alves."

// columns/Col*
#define STRING_COLUMN_BAD_NAME       "Nome de coluna '{1}' não reconhecido."
#define STRING_COLUMN_BAD_FORMAT     "Formato de coluna '{1}.{2}' não reconhecido"
#define STRING_COLUMN_LABEL_TASKS    "Tarefas"
#define STRING_COLUMN_LABEL_DEP      "Depende"
#define STRING_COLUMN_LABEL_DEP_S    "Dep"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_DESC     "Descrição"
#define STRING_COLUMN_LABEL_DUE      "Vence"
#define STRING_COLUMN_LABEL_END      "Fim"
#define STRING_COLUMN_LABEL_ENTERED  "Criada"
#define STRING_COLUMN_LABEL_COUNT    "Contagem"
#define STRING_COLUMN_LABEL_COMPLETE "Concluída"
#define STRING_COLUMN_LABEL_MOD      "Modificada"
#define STRING_COLUMN_LABEL_ADDED    "Adicionada"
#define STRING_COLUMN_LABEL_AGE      "Idade"
#define STRING_COLUMN_LABEL_ID       "ID"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_PROJECT  "Projeto"
#define STRING_COLUMN_LABEL_UNTIL    "Até"
#define STRING_COLUMN_LABEL_WAIT     "Adiada"
#define STRING_COLUMN_LABEL_WAITING  "Adiada até"
#define STRING_COLUMN_LABEL_RECUR    "Period"
#define STRING_COLUMN_LABEL_RECUR_L  "Periodicidade"
#define STRING_COLUMN_LABEL_START    "Início"
#define STRING_COLUMN_LABEL_STARTED  "Iniciada"
#define STRING_COLUMN_LABEL_ACTIVE   "A"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_STATUS   "Estado"
#define STRING_COLUMN_LABEL_STAT     "Es"
#define STRING_COLUMN_LABEL_STAT_PE  "Pendentes"
#define STRING_COLUMN_LABEL_STAT_CO  "Concluídas"
#define STRING_COLUMN_LABEL_STAT_DE  "Eliminadas"
#define STRING_COLUMN_LABEL_STAT_WA  "Adiadas"
// Seria preferivel "Periódicas" mas faz conflito na primeira letra com "Pendentes"
#define STRING_COLUMN_LABEL_STAT_RE  "Recorrentes"
#define STRING_COLUMN_LABEL_STAT_P   "P"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_STAT_C   "C"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_STAT_D   "E"
#define STRING_COLUMN_LABEL_STAT_W   "A"
#define STRING_COLUMN_LABEL_STAT_R   "R"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_TAGS     "Marcas"
#define STRING_COLUMN_LABEL_TAG      "Marca"
#define STRING_COLUMN_LABEL_UUID     "UUID"  // |por-PRT|==|eng-USA|
#define STRING_COLUMN_LABEL_URGENCY  "Urgência"
#define STRING_COLUMN_LABEL_NAME     "Nome"
#define STRING_COLUMN_LABEL_VALUE    "Valor"
#define STRING_COLUMN_LABEL_LAST     "Last instance"
#define STRING_COLUMN_LABEL_RTYPE    "Recurrence type"
#define STRING_COLUMN_LABEL_DATE     "Data"
#define STRING_COLUMN_LABEL_COLUMN   "Colunas"
#define STRING_COLUMN_LABEL_STYLES   "Formatos Suportados"
#define STRING_COLUMN_LABEL_EXAMPLES "Exemplo"
#define STRING_COLUMN_LABEL_SCHED    "Agendado"
#define STRING_COLUMN_LABEL_UDA      "Nome"
#define STRING_COLUMN_LABEL_TYPE     "Tipo"
#define STRING_COLUMN_LABEL_MODIFY   "Modifiable"
#define STRING_COLUMN_LABEL_NOMODIFY "Read Only"
#define STRING_COLUMN_LABEL_LABEL    "Rótulo"
#define STRING_COLUMN_LABEL_DEFAULT  "Por omissão"
#define STRING_COLUMN_LABEL_VALUES   "Valores Permitidos"
#define STRING_COLUMN_LABEL_UDACOUNT "Contagem de Uso"
#define STRING_COLUMN_LABEL_ORPHAN   "UDA Orfão"

#define STRING_COLUMN_LABEL_COMMAND  "Command"
#define STRING_COLUMN_LABEL_CATEGORY "Category"
#define STRING_COLUMN_LABEL_RO       "R/W"
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"
#define STRING_COLUMN_LABEL_GC       "GC"
#define STRING_COLUMN_LABEL_CONTEXT  "Context"
#define STRING_COLUMN_LABEL_FILTER   "Filter"
#define STRING_COLUMN_LABEL_MODS     "Mods"
#define STRING_COLUMN_LABEL_MISC     "Misc"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "casa @contas próxima"
#define STRING_COLUMN_EXAMPLES_PROJ  "casa.jardim"
#define STRING_COLUMN_EXAMPLES_PAR   "casa"
#define STRING_COLUMN_EXAMPLES_IND   "  casa.jardim"
#define STRING_COLUMN_EXAMPLES_DESC  "Mover as roupas para a prateleira mais baixa"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Imediatamente antes do almoço"
#define STRING_COLUMN_EXAMPLES_ANNO2 "Se vais jogar no torneio esta tarde"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Antes de escrever para casa"
#define STRING_COLUMN_EXAMPLES_ANNO4 "Se não vais cortar o cabelo"

// commands/Cmd*
#define STRING_CMD_CONFLICT          "Conflito entre relatório personalizado '{1}' e um comando interno do taskwarrior."
#define STRING_CMD_VERSION_USAGE     "Exibe o número de versão do taskwarrior"
#define STRING_CMD_VERSION_USAGE2    "Exibe apenas o número de versão do taskwarrior"
#define STRING_CMD_VERSION_DOCS      "A documentação do taskwarrior pode ser encontrada usando os comandos 'man task', 'man taskrc', 'man task-color', 'man task-sync' ou em http://taskwarrior.org"
#define STRING_CMD_VERSION_UNKNOWN   "desconhecido"
#define STRING_CMD_LOGO_USAGE        "Exibe o logotipo do Taskwarrior"
#define STRING_CMD_LOGO_COLOR_REQ    "O comando logo requer que o suporte de cor seja ativado."
#define STRING_CMD_EXEC_USAGE        "Executa comandos e scripts externos"
#define STRING_CMD_URGENCY_USAGE     "Exibe o valor de urgência de uma tarefa"
#define STRING_CMD_URGENCY_RESULT    "Tarefa {1} urgência {2}"
#define STRING_CMD_ADD_USAGE         "Adiciona uma nova tarefa"
#define STRING_CMD_ADD_FEEDBACK      "Criada a tarefa {1}."
#define STRING_CMD_ADD_RECUR         "Created task {1} (recurrence template)."
#define STRING_CMD_LOG_USAGE         "Adiciona uma nova tarefa que já está concluída"
#define STRING_CMD_LOG_NO_RECUR      "Não pode usar o comando 'log' para tarefas recorrentes."
#define STRING_CMD_LOG_NO_WAITING    "Não pode usar o comando 'log' para tarefas adiadas."

//#define STRING_CMD_LOG_LOGGED        "Tarefa registada."
#define STRING_CMD_LOG_LOGGED        "Logged task {1}."

#define STRING_CMD_IDS_USAGE_RANGE   "Exibe como intervalo, os IDs das tarefas correspondentes"
#define STRING_CMD_IDS_USAGE_LIST    "Exibe em formato de lista, os IDs das tarefas correspondentes"
#define STRING_CMD_IDS_USAGE_ZSH     "Exibe os IDs e descrições das tarefas correspondentes"
#define STRING_CMD_UDAS_USAGE        "Exibe os detalhes de todas os UDA definidos"
#define STRING_CMD_UDAS_COMPL_USAGE  "Exibe os UDAs definidos para fins de terminação automática"
#define STRING_CMD_UUIDS_USAGE_RANGE "Exibe como lista separada por vírgulas, os UUIDs das tarefas correspondentes"
#define STRING_CMD_UUIDS_USAGE_LIST  "Exibe como lista, os UUIDs das tarefas correspondentes"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Exibe os UUIDs e descrições das tarefas correspondentes"
#define STRING_CMD_INFO_USAGE        "Exibe todos os dados e meta-dados"
#define STRING_CMD_INFO_BLOCKED      "Esta tarefa está bloqueada por"
#define STRING_CMD_INFO_BLOCKING     "Esta tarefa bloqueia"
#define STRING_CMD_INFO_UNTIL        "Até"
#define STRING_CMD_INFO_MODIFICATION "Modificação"
#define STRING_CMD_INFO_MODIFIED     "Última modificação"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Virtual tags"
#define STRING_CMD_UNDO_USAGE        "Reverte a mais recente modificação a uma tarefa"
#define STRING_CMD_STATS_USAGE       "Exibe estatísticas da base de dados de tarefas"
#define STRING_CMD_STATS_CATEGORY    "Categoria"
#define STRING_CMD_STATS_DATA        "Dados"
#define STRING_CMD_STATS_TOTAL       "Total"  // |por-PRT|==|eng-USA|
#define STRING_CMD_STATS_ANNOTATIONS "Anotações"
#define STRING_CMD_STATS_UNIQUE_TAGS "Marcas Únicas"
#define STRING_CMD_STATS_PROJECTS    "Projetos"
#define STRING_CMD_STATS_DATA_SIZE   "Tamanho dos dados"
#define STRING_CMD_STATS_UNDO_TXNS   "Operações a desfazer - 'undo'"
#define STRING_CMD_STATS_BACKLOG     "Operações a sincronizar - 'sync'"
#define STRING_CMD_STATS_TAGGED      "Tarefas marcadas"
#define STRING_CMD_STATS_OLDEST      "Tarefa mais antiga"
#define STRING_CMD_STATS_NEWEST      "Tarefa mais recente"
#define STRING_CMD_STATS_USED_FOR    "Task usado durante"
#define STRING_CMD_STATS_ADD_EVERY   "Tarefa adicionada cada"
#define STRING_CMD_STATS_COMP_EVERY  "Tarefa concluída cada"
#define STRING_CMD_STATS_DEL_EVERY   "Tarefa eliminada cada"
#define STRING_CMD_STATS_AVG_PEND    "Tempo médio pendente"
#define STRING_CMD_STATS_DESC_LEN    "Tamanho médio de descrição"
#define STRING_CMD_STATS_CHARS       "{1} caracteres"
#define STRING_CMD_STATS_BLOCKED     "Tarefas bloqueadas"
#define STRING_CMD_STATS_BLOCKING    "Tarefas a bloquear"
#define STRING_CMD_REPORTS_USAGE     "Lista todos os relatórios suportados"
#define STRING_CMD_REPORTS_REPORT    "Relatório"
#define STRING_CMD_REPORTS_DESC      "Descrição"
#define STRING_CMD_REPORTS_SUMMARY   "{1} relatórios"
#define STRING_CMD_TAGS_USAGE        "Exibe uma lista de todas as marcas em uso"
#define STRING_CMD_COMTAGS_USAGE     "Exibe apenas a lista de todas as marcas em uso, para fins de terminação automática"
#define STRING_CMD_TAGS_SINGLE       "1 marca"
#define STRING_CMD_TAGS_PLURAL       "{1} marcas"
#define STRING_CMD_TAGS_NO_TAGS      "Sem marcas."
#define STRING_CMD_HISTORY_USAGE_D   "Shows a report of task history, by day"
#define STRING_CMD_HISTORY_USAGE_W   "Shows a report of task history, by week"
#define STRING_CMD_HISTORY_DAY       "Day"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_DAY      "Day"
#define STRING_CMD_HISTORY_USAGE_M   "Exibe um relatório mensal do histórico de tarefas"
#define STRING_CMD_HISTORY_YEAR      "Ano"
#define STRING_CMD_HISTORY_MONTH     "Mês"
#define STRING_CMD_HISTORY_ADDED     "Adicionada"
#define STRING_CMD_HISTORY_COMP      "Concluída"
#define STRING_CMD_HISTORY_DEL       "Eliminada"
#define STRING_CMD_HISTORY_NET       "Saldo"
#define STRING_CMD_HISTORY_USAGE_A   "Exibe um relatório anual do histórico de tarefas"
#define STRING_CMD_HISTORY_AVERAGE   "Média"
#define STRING_CMD_HISTORY_LEGEND    "Legenda: {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Legenda: + adicionada, X concluída, - eliminada"
#define STRING_CMD_GHISTORY_USAGE_M  "Exibe um relatório gráfico mensal do histórico de tarefas"
#define STRING_CMD_GHISTORY_USAGE_A  "Exibe um relatório gráfico anual do histórico de tarefas"
#define STRING_CMD_GHISTORY_YEAR     "Ano"
#define STRING_CMD_GHISTORY_MONTH    "Mês"
#define STRING_CMD_GHISTORY_NUMBER   "Número de Adicionadas/Concluídas/Eliminadas"
#define STRING_CMD_UNIQUE_USAGE      "Generates lists of unique attribute values"
#define STRING_CMD_UNIQUE_MISSING    "An attribute must be specified.  See 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "You must specify an attribute or UDA."

#define STRING_CMD_DONE_USAGE        "Concluí a tarefa indicada"
#define STRING_CMD_DONE_CONFIRM      "Concluír tarefa {1} '{2}'?"
#define STRING_CMD_DONE_TASK         "Concluída tarefa {1} '{2}'."
#define STRING_CMD_DONE_NO           "Tarefa não concluída."
#define STRING_CMD_DONE_NOTPEND      "Tarefa {1} '{2}' não está pendente nem em espera."
#define STRING_CMD_DONE_1            "Concluída {1} tarefa."
#define STRING_CMD_DONE_N            "Concluída {1} tarefas."

#define STRING_CMD_PROJECTS_USAGE    "Exibe todos os nomes de projeto em uso"
#define STRING_CMD_PROJECTS_USAGE_2  "Exibe apenas uma lista de todos os nomes de projeto em uso"
#define STRING_CMD_PROJECTS_NO       "Sem projetos."
#define STRING_CMD_PROJECTS_NONE     "(nenhum)"
#define STRING_CMD_PROJECTS_SUMMARY  "{1} projeto"
#define STRING_CMD_PROJECTS_SUMMARY2 "{1} projetos"
#define STRING_CMD_PROJECTS_TASK     "({1} tarefa)"
#define STRING_CMD_PROJECTS_TASKS    "({1} tarefas)"
#define STRING_CMD_SUMMARY_USAGE     "Exibe um relatório do estado das tarefas por projeto"
#define STRING_CMD_SUMMARY_PROJECT   "Projeto"
#define STRING_CMD_SUMMARY_REMAINING "Por concluír"
#define STRING_CMD_SUMMARY_AVG_AGE   "Idade méd"
#define STRING_CMD_SUMMARY_COMPLETE  "Completo"
#define STRING_CMD_SUMMARY_NONE      "(nenhum)"
#define STRING_CMD_COUNT_USAGE       "Conta tarefas correspondentes"
#define STRING_CMD_GET_USAGE         "Método de acesso ao DOM"
#define STRING_CMD_GET_NO_DOM        "Referência DOM não especificada."
#define STRING_CMD_GET_BAD_REF       "'{1}' is not a DOM reference."

#define STRING_CMD_UDAS_NO           "Nenhum UDA definido."
#define STRING_CMD_UDAS_SUMMARY      "{1} UDA definido"
#define STRING_CMD_UDAS_SUMMARY2     "{1} UDAs definidos"
#define STRING_CMD_UDAS_ORPHAN       "{1} UDA orfão"
#define STRING_CMD_UDAS_ORPHANS      "{1} UDAs orfãos"

#define STRING_CMD_DELETE_USAGE      "Elimina a tarefa indicada"
#define STRING_CMD_DELETE_CONFIRM    "Eliminar permanentemente a tarefa {1} '{2}'?"
#define STRING_CMD_DELETE_TASK       "A eliminar tarefa {1} '{2}'."
#define STRING_CMD_DELETE_TASK_R     "A eliminar tarefa recorrente {1} '{2}'."
#define STRING_CMD_DELETE_CONFIRM_R  "Esta é uma tarefa recorrente. Deseja eliminar todas as ocorrências pendentes da mesma tarefa?"
#define STRING_CMD_DELETE_NO         "Tarefa não eliminada."
#define STRING_CMD_DELETE_NOT_DEL    "Tarefa {1} '{2}' não é eliminável."
#define STRING_CMD_DELETE_1          "Eliminada {1} tarefa."
#define STRING_CMD_DELETE_N          "Eliminadas {1} tarefas."

#define STRING_CMD_DUPLICATE_USAGE   "Duplica as tarefas especificadas"
#define STRING_CMD_DUPLICATE_REC     "Nota: A tarefa {1} era uma tarefa mãe periódica. A tarefa duplicada também."
#define STRING_CMD_DUPLICATE_NON_REC "Nota: A tarefa {1} era uma tarefa periódica. A tarefa duplicada não é."
#define STRING_CMD_DUPLICATE_CONFIRM "Duplicar tarefa {1} '{2}'?"
#define STRING_CMD_DUPLICATE_TASK    "Tarefa duplicada {1} '{2}'."
#define STRING_CMD_DUPLICATE_NO      "Tarefa não duplicada."
#define STRING_CMD_DUPLICATE_1       "Duplicada {1} tarefa."
#define STRING_CMD_DUPLICATE_N       "Duplicadas {1} tarefas."

#define STRING_CMD_PURGE_USAGE       "Removes the specified tasks from the data files. Causes permanent loss of data."
#define STRING_CMD_PURGE_ABRT        "Purge operation aborted."
#define STRING_CMD_PURGE_1           "Purged {1} task."
#define STRING_CMD_PURGE_N           "Purged {1} tasks."
#define STRING_CMD_PURGE_CONFIRM     "Permanently remove task {1} '{2}'?"
#define STRING_CMD_PURGE_CONFIRM_R   "Task '{1}' is a recurrence template. All its {2} deleted children tasks will be purged as well. Continue?"
#define STRING_CMD_PURGE_NDEL_CHILD  "Task '{1}' is a recurrence template. Its child task {2} must be deleted before it can be purged."

#define STRING_CMD_START_USAGE       "Assinala a tarefa especificada como iniciada"
#define STRING_CMD_START_NO          "Tarefa não iniciada."
#define STRING_CMD_START_ALREADY     "Tarefa {1} '{2}' já iniciada."
#define STRING_CMD_START_TASK        "A iniciar tarefa {1} '{2}'."
#define STRING_CMD_START_CONFIRM     "Iniciar tarefa {1} '{2}'?"
#define STRING_CMD_START_1           "Iniciada {1} tarefa."
#define STRING_CMD_START_N           "Iniciadas {1} tarefas."

#define STRING_CMD_STOP_USAGE        "Remove o estado de iniciado 'start' de uma tarefa"
#define STRING_CMD_STOP_NO           "Tarefa não parada."
#define STRING_CMD_STOP_ALREADY      "Tarefa {1} '{2}' não iniciada."
#define STRING_CMD_STOP_TASK         "A parar tarefa {1} '{2}'."
#define STRING_CMD_STOP_CONFIRM      "Parar tarefa {1} '{2}'?"
#define STRING_CMD_STOP_1            "Parada {1} tarefa."
#define STRING_CMD_STOP_N            "Paradas {1} tarefas."

#define STRING_CMD_APPEND_USAGE      "Acrescenta texto à descrição de uma tarefa existente"
#define STRING_CMD_APPEND_1          "Acrescentada {1} tarefa."
#define STRING_CMD_APPEND_N          "Acrescentadas {1} tarefas."
#define STRING_CMD_APPEND_TASK       "A acrescentar à tarefa {1} '{2}'."
#define STRING_CMD_APPEND_TASK_R     "A acrescentar à tarefa recorrente {1} '{2}'."
#define STRING_CMD_APPEND_CONFIRM_R  "Esta é uma tarefa recorrente. Deseja acrescentar a todas as ocorrências pendentes desta tarefa?"
#define STRING_CMD_APPEND_CONFIRM    "Acrescentado à tarefa {1} '{2}'?"
#define STRING_CMD_APPEND_NO         "Tarefa não acrescentada."

#define STRING_CMD_PREPEND_USAGE     "Antepõe texto à descrição de uma tarefa existente"
#define STRING_CMD_PREPEND_1         "Anteposta {1} tarefa."
#define STRING_CMD_PREPEND_N         "Antepostas {1} tarefas."
#define STRING_CMD_PREPEND_TASK      "Antepor à tarefa {1} '{2}'."
#define STRING_CMD_PREPEND_TASK_R    "Antepor à tarefa recorrente {1} '{2}'."
#define STRING_CMD_PREPEND_CONFIRM_R "Esta é uma tarefa recorrente. Deseja antepor a todas as ocorrências pendentes desta tarefa?"
#define STRING_CMD_PREPEND_CONFIRM   "Antepor à tarefa {1} '{2}'?"
#define STRING_CMD_PREPEND_NO        "Tarefa não anteposta."

#define STRING_CMD_ANNO_USAGE        "Adiciona uma anotação a uma tarefa existente"
#define STRING_CMD_ANNO_CONFIRM      "Anotar tarefa {1} '{2}'?"
#define STRING_CMD_ANNO_TASK         "A anotar tarefa {1} '{2}'."
#define STRING_CMD_ANNO_TASK_R       "A anotar tarefa recorrente {1} '{2}'."
#define STRING_CMD_ANNO_CONFIRM_R    "Esta é uma tarefa recorrente. Deseja anotar em todas as ocorrências pendentes desta tarefa?"
#define STRING_CMD_ANNO_NO           "Tarefa não anotada."
#define STRING_CMD_ANNO_1            "Anotada {1} tarefa."
#define STRING_CMD_ANNO_N            "Anotadas {1} tarefas."

#define STRING_CMD_COLUMNS_USAGE     "Todas as colunas suportadas e os estilos de formatação"
#define STRING_CMD_COLUMNS_NOTE      "* Significa formato por defeito, e por consequência opcional. Por exemplo 'due' e 'due.formatted' são equivalentes."
#define STRING_CMD_COLUMNS_USAGE2    "Exibe apenas a lista de colunas suportadas"
#define STRING_CMD_COLUMNS_ARGS      "Pode apenas especificar uma frase para procura."

#define STRING_CMD_DENO_USAGE        "Elimina uma anotação"
#define STRING_CMD_DENO_NONE         "A tarefa especificada não tem anotações que possam ser eliminadas."
#define STRING_CMD_DENO_CONFIRM      "Remover anotação da tarefa {1} '{2}'?"
#define STRING_CMD_DENO_FOUND        "Foi encontrada e removida a anotação '{1}'."
#define STRING_CMD_DENO_NOMATCH      "Não foi encontrada nenhuma anotação a remover que corresponda a '{1}'."
#define STRING_CMD_DENO_NO           "Nenhuma anotação removida da tarefa."
#define STRING_CMD_DENO_1            "Removida(s) anotação(ôes) de {1} tarefa."
#define STRING_CMD_DENO_N            "Removida(s) anotação(ôes) de {1} tarefas."

#define STRING_CMD_IMPORT_USAGE      "Importa ficheiros JSON"
#define STRING_CMD_IMPORT_SUMMARY    "Importadas {1} tarefas."
#define STRING_CMD_IMPORT_FILE       "A importar '{1}'"
#define STRING_CMD_IMPORT_MISSING    "File '{1}' not found."
#define STRING_CMD_IMPORT_UUID_BAD   "Not a valid UUID '{1}'."
#define STRING_TASK_NO_DESC          "Descrição da anotação em falta: {1}"
#define STRING_TASK_NO_ENTRY         "Data de entrada da anotação em falta: {1}"
#define STRING_CMD_SYNC_USAGE        "Sincroniza dados com o Taskserver"
#define STRING_CMD_SYNC_NO_SERVER    "Taskserver não está configurado."
#define STRING_CMD_SYNC_BAD_CRED     "Credenciais para o Taskserver incorretas."
#define STRING_CMD_SYNC_BAD_CERT     "Certificado do Taskserver em falta."
#define STRING_CMD_SYNC_BAD_KEY      "Chave do Taskserver em falta."
#define STRING_CMD_SYNC_ADD          "   adiciona {1} '{2}'"
#define STRING_CMD_SYNC_MOD          "modifica {1} '{2}'"
#define STRING_CMD_SYNC_PROGRESS     "A sincronizar com {1}"
#define STRING_CMD_SYNC_SUCCESS0     "Sincronizado com sucesso."
#define STRING_CMD_SYNC_SUCCESS1     "Sincronizado com sucesso. {1} alterações enviadas."
#define STRING_CMD_SYNC_SUCCESS2     "Sincronizado com sucesso. {1} alterações recebidas."
#define STRING_CMD_SYNC_SUCCESS3     "Sincronizado com sucesso. {1} alterações enviadas, {2} alterações recebidas."
#define STRING_CMD_SYNC_SUCCESS_NOP  "Sincronizado com sucesso. Sem alterações."
#define STRING_CMD_SYNC_FAIL_ACCOUNT "Sincronização falhou. As suas credenciais estão incorretas ou a sua conta não existe no Taskserver."
#define STRING_CMD_SYNC_FAIL_ERROR   "Sincronização falhou. O Taskserver devolveu o seguinte erro: {1} {2}"
#define STRING_CMD_SYNC_FAIL_CONNECT "Sincronização falhou. Não foi possível contactar ao Taskserver."
#define STRING_CMD_SYNC_BAD_SERVER   "Sincronização falhou. Erro no parametro de configuração '{1}'"
#define STRING_CMD_SYNC_NO_TLS       "O Taskwarrior foi compilado sem suporte de GnuTLS. A função de sincronização não está disponível."
#define STRING_CMD_SYNC_INIT         "Por favor confirme que deseja enviar todas as tarefas pendentes para o Taskserver"
#define STRING_CMD_SYNC_NO_INIT      "O Taskwarrior não irá executar a sincronização completa de primeira vez."
#define STRING_CMD_SYNC_RELOCATE0    "A sua conta no servidor foi relocalizada. Por favor ajuste a configuração usando:"
#define STRING_CMD_SYNC_RELOCATE1    "task config taskd.server {1}"  // |por-PRT|==|eng-USA|
#define STRING_CMD_SYNC_BAD_CA       "Certificado CA não encontrado."
#define STRING_CMD_SYNC_TRUST_CA     "Deve fornecer um certificado CA ou desactivar a verificação, mas não ambos."
#define STRING_CMD_SYNC_TRUST_OBS    "The 'taskd.trust' settings may now only contain a value of 'strict', 'ignore hostname' or 'allow all'."

// STRING_CMD_DIAG_* strings all appear on the 'diag' command output.
#define STRING_CMD_DIAG_USAGE        "Plataforma, versão e detalhes de ambiente"
#define STRING_CMD_DIAG_PLATFORM     "Plataforma"
#define STRING_CMD_DIAG_COMPILER     "Compilador"
#define STRING_CMD_DIAG_VERSION      "Versão"
#define STRING_CMD_DIAG_CAPS         "Capacidades"
#define STRING_CMD_DIAG_COMPLIANCE   "Compliance"
#define STRING_CMD_DIAG_FEATURES     "Características da versão"
#define STRING_CMD_DIAG_BUILT        "Criado"
#define STRING_CMD_DIAG_COMMIT       "Commit"  // |por-PRT|==|eng-USA|
#define STRING_CMD_DIAG_FOUND        "(presente)"
#define STRING_CMD_DIAG_MISSING      "(em falta)"
#define STRING_CMD_DIAG_MISS_DEP     "Task {1} depends on nonexistent task: {2}"
#define STRING_CMD_DIAG_MISS_PAR     "Task {1} has nonexistent recurrence template {2}"
#define STRING_CMD_DIAG_ENABLED      "Ativado"
#define STRING_CMD_DIAG_DISABLED     "Desativado"
#define STRING_CMD_DIAG_CONFIG       "Configuração"
#define STRING_CMD_DIAG_TESTS        "Testes"
#define STRING_CMD_DIAG_UUID_SCAN    "UUIDs duplicados em {1} tarefas:"
#define STRING_CMD_DIAG_REF_SCAN     "Scanned {1} tasks for broken references:"
#define STRING_CMD_DIAG_REF_OK       "No broken references found"
#define STRING_CMD_DIAG_UUID_DUP     "UUID duplicado {1}"
#define STRING_CMD_DIAG_UUID_NO_DUP  "Nenhum duplicado encontrado"
#define STRING_CMD_DIAG_NONE         "-nenhum-"
#define STRING_CMD_DIAG_HOOKS        "Âncoras"
#define STRING_CMD_DIAG_HOOK_NAME    "unrecognized hook name"
#define STRING_CMD_DIAG_HOOK_SYMLINK "symlink"
#define STRING_CMD_DIAG_HOOK_EXEC    "executable"
#define STRING_CMD_DIAG_HOOK_NO_EXEC "not executable"
#define STRING_CMD_DIAG_HOOK_ENABLE  "Enabled"
#define STRING_CMD_DIAG_HOOK_DISABLE "Disabled"

#define STRING_CMD_COMMANDS_USAGE    "Generates a list of all commands, with behavior details"
#define STRING_CMD_HCOMMANDS_USAGE   "Gera uma lista com todos os comandos, para fins de terminação automática"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Gera uma lista com todos os comandos, para terminação automática em zsh"
#define STRING_CMD_ZSHATTS_USAGE     "Gera uma lista de todos os atributos, para terminação automática em zsh"
#define STRING_CMD_ALIASES_USAGE     "Gera uma lista com todos os 'alias', para fins de terminação automática"

#define STRING_CMD_MODIFY_USAGE1     "Modifica a tarefa existente com os argumentos indicados."
#define STRING_CMD_MODIFY_NO_DUE     "Não pode criar tarefas recorrentes sem uma data de vencimento."
#define STRING_CMD_MODIFY_REM_DUE    "Não pode remover a data de vencimento de uma tarefa recorrente."
#define STRING_CMD_MODIFY_REC_ALWAYS "Não pode remover o attributo de recorrência de uma tarefa recorrente."
#define STRING_CMD_MODIFY_TASK       "A modificar a tarefa {1} '{2}'."
#define STRING_CMD_MODIFY_TASK_R     "A modificar a tarefa recorrente {1} '{2}'."
#define STRING_CMD_MODIFY_1          "Modificada {1} tarefa."
#define STRING_CMD_MODIFY_N          "Modificadas {1} tarefas."
#define STRING_CMD_MODIFY_NO         "Tarefa não modificada."
#define STRING_CMD_MODIFY_CONFIRM    "Modificar tarefa {1} '{2}'?"
#define STRING_CMD_MODIFY_RECUR      "Esta é uma tarefa recorrente. Deseja modificar todas as recorrências pendentes da mesma?"
#define STRING_CMD_MODIFY_NEED_TEXT  "É necessário fornecer mais informação."
#define STRING_CMD_MODIFY_INACTIVE   "Note: Modified task {1} is {2}.  You may wish to make this task pending with: task {3} modify status:pending"

#define STRING_CMD_COLOR_USAGE       "Todas as cores, uma amostra ou a legenda"
#define STRING_CMD_COLOR_HERE        "Estas são as cores actualmente em uso:"
#define STRING_CMD_COLOR_COLOR       "Cor"
#define STRING_CMD_COLOR_DEFINITION  "Definição"
#define STRING_CMD_COLOR_EXPLANATION "Use este comando para ver como as cores são apresentadas no seu terminal."
#define STRING_CMD_COLOR_16          "Modo 16-cores (suporta sublinhado, negrito e fundo brilhante):"
#define STRING_CMD_COLOR_256         "Modo 256-cores (suporta sublinhado):"
#define STRING_CMD_COLOR_YOURS       "A sua amostra:"
#define STRING_CMD_COLOR_BASIC       "Cores básicas"
#define STRING_CMD_COLOR_EFFECTS     "Efeitos"
#define STRING_CMD_COLOR_CUBE        "Cubo de cor rgb"
#define STRING_CMD_COLOR_RAMP        "Gradiente cinza"
#define STRING_CMD_COLOR_TRY         "Tente executar '{1}'."
#define STRING_CMD_COLOR_OFF         "O modo de cor encontra-se desactivado no seu ficheiro .taskrc. Para ativar cor, remova a linha 'color=off', ou altere de 'off' para 'on'."
#define STRING_CMD_CONFIG_USAGE      "Altera parametros na configuração do 'task'"
#define STRING_CMD_CONFIG_CONFIRM    "Tem a certeza que pretende alterar o valor de '{1}' de '{2}' para '{3}'?"
#define STRING_CMD_CONFIG_CONFIRM2   "Tem a certeza que pretende adicionar '{1}' com o valor '{2}'?"
#define STRING_CMD_CONFIG_CONFIRM3   "Tem a certeza que pretende remover '{1}'?"
#define STRING_CMD_CONFIG_NO_ENTRY   "Não encontrada a entrada '{1}' ."
#define STRING_CMD_CONFIG_FILE_MOD   "Ficheiro de configuração {1} alterado."
#define STRING_CMD_CONFIG_NO_NAME    "Especifique o nome da configuração a modificar."
#define STRING_CMD_HCONFIG_USAGE     "Lista todas as configurações suportadas, para fins de terminação automática"
#define STRING_CMD_CONTEXT_USAGE     "Set and define contexts (default filters)"
#define STRING_CMD_CONTEXT_DEF_SUCC  "Context '{1}' defined. Use 'task context {1}' to activate."
#define STRING_CMD_CONTEXT_DEF_FAIL  "Context '{1}' not defined."
#define STRING_CMD_CONTEXT_DEF_USAG  "Both context name and its definition must be provided."
#define STRING_CMD_CONTEXT_DEF_ABRT  "Context definiton aborted."
#define STRING_CMD_CONTEXT_DEF_ABRT2 "Filter validation failed: {1}"
#define STRING_CMD_CONTEXT_DEF_CONF  "The filter '{1}' matches 0 pending tasks. Do you wish to continue?"
#define STRING_CMD_CONTEXT_DEF_INVLD "The name '{1}' is reserved and not allowed to use as a context name."
#define STRING_CMD_CONTEXT_DEL_SUCC  "Context '{1}' deleted."
#define STRING_CMD_CONTEXT_DEL_FAIL  "Context '{1}' not deleted."
#define STRING_CMD_CONTEXT_DEL_USAG  "Context name needs to be specified."
#define STRING_CMD_CONTEXT_LIST_EMPT "No contexts defined."
#define STRING_CMD_CONTEXT_SET_NFOU  "Context '{1}' not found."
#define STRING_CMD_CONTEXT_SET_SUCC  "Context '{1}' set. Use 'task context none' to remove."
#define STRING_CMD_CONTEXT_SET_FAIL  "Context '{1}' not applied."
#define STRING_CMD_CONTEXT_SHOW_EMPT "No context is currently applied."
#define STRING_CMD_CONTEXT_SHOW      "Context '{1}' with filter '{2}' is currently applied."
#define STRING_CMD_CONTEXT_NON_SUCC  "Context unset."
#define STRING_CMD_CONTEXT_NON_FAIL  "Context not unset."
#define STRING_CMD_HCONTEXT_USAGE    "Lists all supported contexts, for completion purposes"
#define STRING_CMD_CUSTOM_MISMATCH   "O número de colunas e de rótulos não é o mesmo no relatório '{1}'."
#define STRING_CMD_CUSTOM_SHOWN      "{1} visiveis"
#define STRING_CMD_CUSTOM_COUNT      "1 tarefa"
#define STRING_CMD_CUSTOM_COUNTN     "{1} tarefas"
#define STRING_CMD_CUSTOM_TRUNCATED  "truncado a {1} linhas"
#define STRING_CMD_TIMESHEET_USAGE   "Sumário semanal de tarefas concluídas e iniciadas"
#define STRING_CMD_TIMESHEET_STARTED "Iniciadas ({1} tarefas)"
#define STRING_CMD_TIMESHEET_DONE    "Concluídas ({1} tarefas)"
#define STRING_CMD_BURN_USAGE_M      "Mostra um gráfico de burndown, por mês"
#define STRING_CMD_BURN_USAGE_W      "Mostra um gráfico de burndown, por semana"
#define STRING_CMD_BURN_USAGE_D      "Mostra um gráfico de burndown, por dia"
#define STRING_CMD_BURN_TITLE        "Burndown"  // |por-PRT|==|eng-USA|
#define STRING_CMD_BURN_TOO_SMALL    "Janela do terminal demasiado pequena para desenhar o gráfico."
#define STRING_CMD_BURN_TOO_LARGE    "Terminal window too large to draw a graph."
#define STRING_CMD_BURN_DAILY        "Diário"
#define STRING_CMD_BURN_WEEKLY       "Semanal"
#define STRING_CMD_BURN_MONTHLY      "Mensal"
#define STRING_CMD_BURN_STARTED      "Inicia."          // Must be 7 or fewer characters
#define STRING_CMD_BURN_DONE         "Conclu."          // Must be 7 or fewer characters
#define STRING_CMD_BURN_PENDING      "Penden."          // Must be 7 or fewer characters
#define STRING_CMD_BURN_NO_CONVERGE  "Não converge"
#define STRING_CMD_CAL_USAGE         "Mostra um calendário, com datas de vencimento assinaladas"
#define STRING_CMD_CAL_BAD_MONTH     "Argumento '{1}' não é um mês válido."
#define STRING_CMD_CAL_BAD_ARG       "Não foi possível reconhecer o argumento '{1}'."
#define STRING_CMD_CAL_LABEL_DATE    "Data"
#define STRING_CMD_CAL_LABEL_HOL     "Feriado"
#define STRING_CMD_CAL_SUN_MON       "A variável de configuração 'weekstart' apenas pode conter 'domingo' ou 'segunda-feira'."
#define STRING_CMD_CALC_USAGE        "Calculadora"

// Errors
// TODO Move each of these to appropriate section.
#define STRING_UDA_TYPE              "Atributos definidos pelo utilizador (UDAs) apenas podem ser do tipo 'texto', 'data', 'duração' ou 'numérico'."
#define STRING_UDA_COLLISION         "O UDA '{1}' tem o mesmo nome que um atributo interno, tal não é permitido."
#define STRING_INVALID_MOD           "O atributo '{1}' não permite o valor '{2}'."
#define STRING_ERROR_DETAILS         "A definição 'calendar.details.report' pode apenas indicar um nome de relatório."
#define STRING_ERROR_NO_FILTER       "Command line filters are not supported by this command."

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "Nenhuma tarefa."
#define STRING_FEEDBACK_NO_TASKS_SP  "Nenhuma tarefa especificada."
#define STRING_FEEDBACK_NO_MATCH     "Nenhuma correspondência."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 tarefa)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} tarefas)"
#define STRING_FEEDBACK_DELETED      "{1} será eliminada."
#define STRING_FEEDBACK_DEP_SET      "As dependências serão alteradas para '{1}'."
#define STRING_FEEDBACK_DEP_MOD      "As dependências serão alteradas de '{1}' para '{2}'."
#define STRING_FEEDBACK_DEP_DEL      "Eliminadas as dependências '{1}'."
#define STRING_FEEDBACK_DEP_WAS_SET  "Alteradas as dependências para '{1}'."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Alteradas as dependências de '{1}' para '{2}'."
#define STRING_FEEDBACK_ATT_SET      "{1} será definido como '{2}'."
#define STRING_FEEDBACK_ATT_MOD      "{1} será alterado de '{2}' para '{3}'."
#define STRING_FEEDBACK_ATT_DEL      "{1} eliminado."
#define STRING_FEEDBACK_ATT_DEL_DUR  "{1} eliminado (duração: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} definido como '{2}'."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} alterado de '{2}' para '{3}'."
#define STRING_FEEDBACK_ANN_ADD      "Adicionada anotação de '{1}'."
#define STRING_FEEDBACK_ANN_DEL      "Eliminada anotação '{1}'."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Anotação alterada para '{1}'."
#define STRING_FEEDBACK_NOP          "Não serão efetuadas alterações."
#define STRING_FEEDBACK_WAS_NOP      "Nenhuma alteração efetuada."
#define STRING_FEEDBACK_TAG_NOCOLOR  "A marca especial 'nocolor' irá desactivar as regras de cor nesta tarefa."
#define STRING_FEEDBACK_TAG_NONAG    "A marca especial 'nonag' irá prevenir avisos quando a tarefa é modificada."
#define STRING_FEEDBACK_TAG_NOCAL    "A marca especial 'nocal' irá manter esta tarefa ausente do relatório de 'calendário'."
#define STRING_FEEDBACK_TAG_NEXT     "A marca especial 'next' irá aumentar a urgência desta tarefa de modo a que apareça no relatório 'next'."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Virtual tags (including '{1}') are reserved and may not be added or removed."
#define STRING_FEEDBACK_UNBLOCKED    "Desbloqueada {1} '{2}'."
#define STRING_FEEDBACK_EXPIRED      "Tarefa {1} '{2}' expirou e foi eliminada."
#define STRING_FEEDBACK_BACKLOG_N    "Há {1} modificações locais. Necessário sincronizar (sync)."
#define STRING_FEEDBACK_BACKLOG      "Há {1} modificações locais. Necessário sincronizar (sync)."

// helpers
#define STRING_HELPER_PROJECT_CHANGE "The project '{1}' has changed."
#define STRING_HELPER_PROJECT_COMPL  "Project '{1}' is {2}% complete"
#define STRING_HELPER_PROJECT_REM    "({1} of {2} tasks remaining)."
#define STRING_HELPER_PROJECT_REM1   "({1} task remaining)."

// 'show' command
#define STRING_CMD_SHOW              "Mostra todas ou um subconjunto das variáveis de configuração"
#define STRING_CMD_SHOW_ARGS         "Apenas pode específicar 'all' ou uma expressão a procurar."
#define STRING_CMD_SHOW_NONE         "Nenhuma variável de configuração corresponde à procura."
#define STRING_CMD_SHOW_UNREC        "O seu ficheiro .taskrc contém as seguintes variávies desconhecidas:"
#define STRING_CMD_SHOW_DIFFER       "Algumas das variáveis no seu .taskrc diferem dos valores por defeito."
#define STRING_CMD_SHOW_EMPTY        "Erro de configuração: o ficheiro .taskrc não contém nenhuma entrada."
#define STRING_CMD_SHOW_DIFFER_COLOR "Estas estão realçadas com {1}."
#define STRING_CMD_SHOW_CONFIG_ERROR "Erro de configuração: {1} contém um valor desconhecido '{2}'."
#define STRING_CMD_SHOW_NO_LOCATION  "Erro de configuração: 'data.location' não especificada no ficheiro .taskrc ."
#define STRING_CMD_SHOW_LOC_EXIST    "Erro de configuração: 'data.location' contém um diretório que não existe ou não é accessível."
#define STRING_CMD_SHOW_CONF_VAR     "Variável de configuração"
#define STRING_CMD_SHOW_CONF_VALUE   "Valor"
#define STRING_CMD_SHOW_CONF_DEFAULT "Valor por defeito"
#define STRING_CMD_SHOWRAW           "Mostra todas as definições de configuração num formato legível por máquina"

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior já não suporta o formato 1, originalmente usado entre 27-Novembro-2006 e 31-Dezembro-2007."
#define STRING_TASK_NO_FF2           "Taskwarrior já não suporta o formato 2, originalmente usado entre 1-Janeiro-2008 e 12-April-2009."
#define STRING_TASK_NO_FF3           "Taskwarrior no longer supports file format 3, originally used between 23 March 2009 and 16 May 2009."
#define STRING_TASK_PARSE_UNREC_FF   "Formato taskwarrior não reconhecido."
#define STRING_TASK_DEPEND_ITSELF    "Uma tarefa não pode depender dela própria."
#define STRING_TASK_DEPEND_MISS_CREA "Não foi possível criar a dependência da tarefa {1} - esta não existe."
#define STRING_TASK_DEPEND_MISS_DEL  "Não foi possível eliminar a dependência da tarefa {1} - esta não existe."
#define STRING_TASK_DEPEND_DUP       "Tarefa {1} já depende da tarefa {2}."
#define STRING_TASK_DEPEND_CIRCULAR  "Dependência circular detetada e não permitida."
#define STRING_TASK_VALID_DESC       "Uma tarefa necessita de uma descrição."
#define STRING_TASK_VALID_BLANK      "Não é possível adicionar uma tarefa em branco."
#define STRING_TASK_VALID_BEFORE     "Aviso: Especificou que a data de '{1}' é posterior à data de '{2}'."
#define STRING_TASK_VALID_REC_DUE    "Uma tarefa recorrente necessita de uma data de vencimento."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "Execução do comando abortada."
#define STRING_TASK_SAFETY_ALLOW     "Não especificou um filtro e com o valor de 'allow.empty.filter', nenhuma ação foi tomada."
#define STRING_TASK_INVALID_COL_TYPE "Unrecognized column type '{1}' for column '{2}'"

#endif
