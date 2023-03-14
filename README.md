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
![Пример создания ветки develop](https://github.com/TonyaManina/GitLab-Tutorial/blob/main/1.png)
 
 
 
 
 
 


## Глава 3. Установка ветки develop по умолчанию
1) В репозитории проекта выберите **Ветви**.
2) На странице **Ветви** выберите "Дополнительные параметры " рядом с нужной новой ветвью по умолчанию и выберите "Задать как ветвь по умолчанию".
3) После установки новой ветви по умолчанию можно удалить предыдущее значение по умолчанию, если вы хотите.
## Глава 4 Создание issue
1) Перейдите на главную страницу репозитория. 
2. Под именем репозитория щелкните  issue\Проблемы.
3) Щелкните Новая проблема.
4) Если в вашем репозитории используются шаблоны проблем, щелкните Начать работу рядом с типом проблемы, который хотите создать.Или щелкните Создать пустую проблему, если среди доступных вариантов отсутствует тип проблемы, которую вы хотите создать.
5) Введите название и описание проблемы.
6) Если вы являетесь координатором проекта, вы можете назначить проблему другому пользователю, добавить ее на панель проекта, связать ее с вехой или применить метку.
7) Закончив, нажмите кнопку **Отправить новую проблему**.
## Глава 5. Создание ветки по issue
1) На GitHub.com перейдите на главную страницу репозитория. 2. Под именем репозитория щелкните  Проблемы.
2) В списке проблем щелкните проблему, для которой нужно создать ветвь.
3) На правой боковой панели в разделе "Разработка" нажмите кнопку Создать ветвь. Если у проблемы уже есть связанная ветвь или запрос на вытягивание, щелкните  и в нижней части раскрывающегося меню нажмите кнопку Создать ветвь.
4) По умолчанию новая ветвь создается в текущем репозитории из ветви по умолчанию. Измените имя и сведения ветви в соответствии с требованиями в диалоговом окне "Создание ветви для этой проблемы".
5) Выберите, следует ли работать в ветви локально или открыть ее в GitHub Desktop.
6) Когда вы будете готовы создать ветвь, нажмите кнопку Создать ветвь.


## Глава 6. Создание запроса на слияние
Итак, чтобы создать запрос на слияние, необходимо перейти в раздел merge requests и выбрать опцию new merge request. Далее необходимо выбрать source branch (это наша ветка, в которой мы работаем) и выбрать target branch (это ветка, с которой мы хотим слить свою ветку). После этого если у вас есть доступ и отсутствуют конфликты, слияние произойдет. Если же нет доступа, придется подождать разрешения на слияние, а если есть конфликты, их необходимо будет разрешить. 
![Запрос на слияние](https://github.com/TonyaManina/GitLab-Tutorial/blob/main/%D0%A1%D0%BD%D0%B8%D0%BC%D0%BE%D0%BA%20%D1%8D%D0%BA%D1%80%D0%B0%D0%BD%D0%B0%202023-03-14%20%D0%B2%2010.47.59%20PM.png?raw=true)

![Запрос на слияние](https://github.com/TonyaManina/GitLab-Tutorial/blob/main/%D0%A1%D0%BD%D0%B8%D0%BC%D0%BE%D0%BA%20%D1%8D%D0%BA%D1%80%D0%B0%D0%BD%D0%B0%202023-03-14%20%D0%B2%2010.51.22%20PM.png?raw=true)

## Глава 7 Комментирование и принятие реквеста
 ### Делаем копию репозитория
Рассматривая первую модель разработки, необходимо иметь свою копию изначального репозитория, в которой и будет вестись работа, и изменения из которой и будут предлагаться затем автору изначального репозитория.
Сделать это очень просто: на странице репозитория имеется кнопочка «Fork», которую и следует нажать.
После чего, эту свою копию уже можно «стянуть» на свой компьютер:
> git clone git@github.com:username/project_name.git

Склонированный репозиторий имеет одну привязку к удалённому репозиторию, названную origin, которая указывает на вашу копию на GitHub, а не на оригинальный репозиторий, чтобы отслеживать изменения и в нём, вам нужно будет добавить другую привязку, названную, например, upstream.
###Возвращаем изменения: Pull request
Итак, всё сделано. Вы написали код, он у вас на компьютере, так и на GitHub'е. Осталось только «заслать» его в оригинальный репозиторий.
Идите на страницу вашей копии репозитория на GitHub, выбирайте ветвь и жмите кнопку Pull Request.
алее вы попадёте на предпросмотровую страницу, на которой сможете ввести название и описание ваших изменений (название потом попадёт в описание мёрдж-коммита и станет достоянием общественности, учтите это).
Там же вы можете посмотреть, какие коммиты попали в пулл реквест:
А так же общий diff всех изменений в пулл реквесте:
Вы попадёте в форму выбора базовой и исходной ветвей:
Слева выбираете в какую ветку будут вливаться изменения в родительском репозитории, справа — какие изменения будут браться с вашего репозитория. По примеру: справа octocat/Spoon-Knife/master, слева username/Spoon-Knife/feature. Здесь вы можете указывать не только ветки, но так же теги и id отдельных коммитов в соответствующем репозитории.
**ВАЖНО**: Договоритесь с владельцем «родительского» репозитория, в какую ветку будете вливать изменения (он может написать это в README)
Изменение базового репозитория меняет и список людей, кто получит уведомление о пулл реквесте. Каждый, кто имеет право «на запись» в базовый репозиторий, получит письмо и увидит уведомление на главной GitHub'а, в следующий раз, как на него зайдёт.
Как только список коммитов вас удовлетворит, нажмите кнопку Update Commit Range.
Когда вы ввели название и описание и перепроверили список коммитов и изменения в файлы, попавшие в пулл реквест, нажмите кнопку Send pull request. Пулл реквест будет создан незамедлительно.

##  Глава 8. формирование стабильной версии в master с простановкой тега
Git имеет возможность помечать определенные моменты в истории вашего проекта. Это используется в основном для контроля версий. Такие пометки называются тэгами. Просмотреть список тэгов можно с помощью команды git tag в консоли.
Аннотированные теги хранятся в базе данных Git как полноценные объекты. Они имеют контрольную сумму, содержат имя автора, его e-mail и дату создания, имеют комментарий и могут быть подписаны и проверены с помощью GNU Privacy Guard (GPG). Обычно рекомендуется создавать аннотированные теги, чтобы иметь всю перечисленную информацию.
Создать тэг довольно просто:
git tag -a v1.4 -m "my version 1.4"
-m задает сообщение, которое хранится вместе с тэгом. С помощью команды git show вы можете посмотреть тэг вместе с коммитом.
![Запрос на слияние](https://github.com/TonyaManina/GitLab-Tutorial/blob/main/basic-branching-1.png?raw=true)

## Глава 9 Работа с wiki проекта
После добавления проекта в меню слева доступен раздел Wiki. В нем можно добавить неограниченное количество страниц с текстовыми материалами. Wiki специфична для проекта.
> Первой всегда добавляется главная страница Home.

Стандартным способом оформления является **Markdown**. Доступен режим Preview в котором видно как будет выглядеть текст.
Wiki могут существовать для проектов, находящихся в общем доступе и для приватных репозиториев. Подробную документацию всегда стоит вести, это позволит удобно работать с проектом всем, кому это требуется.
### Ограничения wiki на GitHub
 Github имеет некоторые ограничения:

  **ограниченный дизайн**: все Wiki GitHub в значительной степени выглядят одинаково;
  
  **открытый доступ в Интернете**: если документация должна быть приватной, GitHub вряд ли будет подходящим местом для хранения (однако, есть опция делать      репозитории приватными);
  
  **нет структуры**: Вики-страницы GitHub выдают пустую страницу и позволяют добавлять разделы. Но нет возможности делать какие-либо продвинутые стили или      интерактивные функции.

