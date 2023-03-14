# GitLab-Tutorial
the tutorial for gitlab

# Quests 
## Оглавление
 тут будет написано оглавление
 
 1) создание личного репозитория с нужным .gitignore и простым README.MD,
 2) создание веток develop и master
 3) установка ветки develop по умолчанию
 4) создание issue на создание текущего мануала
 5) создание ветки по issue
 6) создание merge request по ветке в develop
 7) комментирование и принятие реквеста
 8) формирование стабильной версии в master с простановкой тега
 9) работа с wiki проекта







## Глава 1. Создание собственного репозитория с правильным .gitignore и простым README.md файлом
Зарегистрировавшись на сайте, у вас появится возможность создать свой репозиторий, в котором вы можете создать собственный проект. При создании проекта предлагается заполнить .gitignore и README.md. 

### Gitignore

 .gitignore содержит в себе типы файлов, которые будут игнорироваться гитом и не отображаться при команде git status в вашем терминале. Это значит, что вы можете сколько угодно создавать и менять файлы данных типов в папках вашего проекта и они не будут отображены в коммитах. Например, если вы делаете для себя "шпаргалку" в виде текстового файла, а проект не содержит никаких текстовых файлов, просто добавьте .txt в .gitignore
 
 ### README.md
 
 В этом файле может содержаться полезная информация по вашему проекту и коду. Текст написан с помощью markdown, и файл имеет соответствующее расширение. Писать комментарии к версиям очень полезно и помогает не запутаться во множестве версий проекта.









## Глава 2. Создание ветки master и develop
После того, как вы склонировали репозиторий, вернитесь в папку, где будет лежать ваш проект с помощью команды cd, после чего пропишите следующую команду: git checkout -b master. Поздравляю, ветка создана. Ветку develop создать можно по такому же принципу.
![Пример создания ветки develop](/users/home_florenes/1.png)
 
 
 
 
 
 


## Глава 3. Установка ветки develop по умолчанию
1) В репозитории проекта выберите **Ветви**.
2) На странице **Ветви** выберите "Дополнительные параметры " рядом с нужной новой ветвью по умолчанию и выберите "Задать как ветвь по умолчанию".
3) После установки новой ветви по умолчанию можно удалить предыдущее значение по умолчанию, если вы хотите.
