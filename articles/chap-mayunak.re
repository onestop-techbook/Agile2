= 不安とうまく付き合う

//flushright{
中村麻由
//}


アジャイルにはじめて取り組んだとき、期待していたような成果がすぐに出ず、焦りを感じたことはありませんか。プロジェクト序盤から問題が噴出し、むしろ進捗が遅く感じたことはないでしょうか。何より、周りから「アジャイルって速いんじゃなかったの？」などの批判を受け、チーム全体が意気消沈してしまったことはありませんでしたか。


そして、なかなか改善する兆しが見られず、結局アジャイルの取り組み自体が終了してしまったことも……。


プロジェクトの最初からつまづき、目に見える成果にたどり着けないと、チーム全体が不安に襲われると思います。しかし、その不安が、実はアジャイルがうまくいっているサインだと考えるとどうでしょうか。


職場で初めてアジャイルが導入されたとき、私も同僚もかなり苦戦をしました。うまくいっていなかった原因はさまざまでしたが、当時クライアントを含め、チーム全体を覆いがちだったネガティブな雰囲気をよく覚えています。それは「不安」、そしてそれが解消されないことによる「不満」でした。


アジャイルを学ぶための書籍や研修では、主に「何をするべきか」を知ることができます。しかし、チームとしてアジャイルのマインドセットを育み成長する過程で、誰もが体験しがちな「感情」についてはあまり触れられません。講習を受け、体系的な知識を得たチームですら実戦のなかで不安を感じるならば、アジャイルのことをあまり知らずにステークホルダー（利害関係者）になった人は、さらに大きな不安を感じるかもしれません。


アジャイル文化を根づかせる鍵は、人間同士のコミュニケーションや信頼関係です。そのため、誰かが感じている「不安」など、感情に向き合うことは大切な一歩となります。筆者は主に実践を通してアジャイルを学びましたが、〓本章〓ではデザイナーという立場から見えた景色と学び、そして初めてアジャイルに取り組むチームが陥りがちな「不安」について考察します。

== とあるチームのストーリー


アジャイルを導入したばかりのプロダクトチームが、スプリントレビューをはじめる場面を思い浮かべてください。今回はスプリント2が終わったところです。


POが緊張した面持ちで、デモをはじめようとしています。スプリント1のデモは特に見せられるものがなく、気まずい雰囲気で終わってしまいました。デザイナーと開発者も参加していますが、何か揉めているように小声で会話を交わしています。部屋にステークホルダーが入ってきました。デモがはじまります。


まずは、今回のスプリントで取り組んだユーザーストーリーのデモです。アプリを立ち上げるといくつかのカード型UIが表示されました。カードのなかに表示されるメッセージはまだダミーのテキストで、見た目も簡素です。


「これがデザインなの？」


ビジネス部門から参加していたステークホルダーの1人がコメントをしました。


「あ、いえ、まだデザインは反映されていません」


慌てた様子でデザイナーが答えます。


「デザインが仕上がってこないので、後回しにして機能だけ先に作っています」


開発者が続けました。ステークホルダーは少し不満そうな表情を見せています。


「デモは以上です。デザインのほうから、次のストーリーのモックアップを見せられますか？」


POに聞かれ、デザイナーは少し焦った感じで返事をしました。


「あ、はい……」


静まり返った時間が流れます。デザイナーが、しどろもどろになりながらデザインプロトタイプを見せはじめます。


「まだラフなスケッチですが……。どうでしょう？」


「ボタンの位置をあと2ピクセル、上にあげたほうがいいんじゃない？」


デザインマネージャーがコメントします。


「あ、でもまだラフなので……」


結局、特に有意義なフィードバックもなく、予定していた時間より20分早く会は終了しました。あまり盛り上がることもなく、次第に次のデモから参加する人は減っていきます。

== 不安感に負けてしまうチームと周りの人たち


これは、私が関わった複数のプロジェクトで体験したスプリントレビューの様子を組み合わせたものです。デザイナーは、デザインに必要な時間が十分与えられていないと感じ、まだ自分のなかでも納得がいっていないものを見せ、それに対して否定的な意見がくることに不満でした。開発者は、デザインに時間がかかりすぎていると感じ、開発を進められないまま時間がすぎていくことに苛立ちを感じていました。POは、スプリント内で終わると踏んでいたストーリーが終わらず、焦りを感じ、デザインと開発者のすれちがいに気づいていませんでした。ステークホルダーは、アジャイルに「とにかくスピードがあがり、ものすごいプロダクトがパッと出てくるもの」という印象を持っていました。


何より、「アジャイルは正しいはず」という空気に、誰も「うまくいっていない」という声をあげられませんでした。結果思ったように開発は進まず、次第に自信をなくしたチームは、アジャイルはもうやめたほうがよいのではないかと思いはじめました。


しかし、本当はこのチームはよいスタートを切っていたはずです。

== リスクを早く炙り出したほうがよいアジャイル


『アジャイルな見積りと計画づくり〜価値あるソフトウェアを育てる概念と技法〜』（マイナビ出版,2009）@<fn>{agileplanning}という本のなかで、Mike Cohn氏は従来の計画方法が崩れがちな理由の1つに、「不確実性を無視している」ことをあげています。

//footnote[agileplanning][以下、『アジャイルな見積りと計画づくり』]

//quote{
まず、私たちはプロダクトに関する不確実性を無視している。初期の要求分析において、完璧で漏れのないプロダクト仕様を策定できることを前提にしている。
//}


//quote{
同様に、私たちはプロダクトを構築する方法に関する不確実性も無視している。どんな作業なのかはっきりわかっていないのに、例えば「10日間」などと、高い精度で見積もれるという前提に立っているのだ。
//}


プロジェクトの初期段階におけるプロダクトの不確実性は、みなさん意識することが多いと思います。しかし、「プロダクトを構築する方法に関する不確実性」は、むしろ見て見ぬふりをしたくなる部分かもしれません。どのくらいかかるか、どうアプローチするのか、まだ正確にはわかりませんと口に出してしまうと、まるでチームの知識や専門性がたりていないように感じるからです。


しかし、プロダクトに不確実性があるということは、それを構築する方法にも少なからず不確実性があるということです。


また、プロダクト開発がチームスポーツであること、私たちが人間であるということも、不確実性をあげる要素です。特に、新しくできたばかりのチームでは、お互いのペースを掴むまでの試行錯誤も不確実性の要素になるでしょう。


//image[image1][プロダクトとプロダクトを構築する方法における不確実性の例][scale=1.0]


逆に、アジャイルな計画づくりがうまくいくためには、この不確実性を受け入れることが大切な第一歩となります。前出の『アジャイルな見積りと計画づくり』では、最後の章で架空のチームが登場し、さまざまな課題に直面しながら、計画を修正していく様子が描かれています。その様子を見ていると、チームがプロダクトについてだけでなく、自分たちについても少しずつ学び、チームワークの質をあげていく様子を見ることができます。


このチームのように、アジャイルでは早い段階で「プロダクト」と「プロダクト構築の方法」、両方に関して「うまくいっていないこと」を可視化させ、対処することでリスクを減らしていくことが大切です。しかし、実際には不確実性が多いなかで問題が噴出すると、人は不安になるものです。


== 「デザイン」がさらに不安を募らせる


デザインと開発の協業経験の有無によっても、不安度は変わります。今まで「デザイン仕様」を受け取ってから開発をはじめていた場合、真っ白な状態からデザインがはじまることに不安を感じる人は多いでしょう。


もちろん、リリース用の開発がはじまる前に「ディスカバリー」を行い、ある程度コンセプト作りをしているケースがあるかもしれません。しかし、おおまかな方向性が定まっていたとしても、デザインという作業は発散と収束を繰り返します。しかも一度ではなく、視点を変えながら何度もその過程を繰り返すことで、最終的なソリューションに落ち着きます。つまり、発散させている間は常に「何が正しいのかわからない」という状態が続くのです。


開発も模索、検討する時期があるとは思いますが、最短で最適解を目指すのではないでしょうか。相対的な差ではありますが、お互い、そのときどきのベクトルがちがうことが意識できていないと、次第に不満が出てきます。デザイナーは十分な時間がないと感じたまま開発者を待たせているプレッシャーに悩み、開発はなかなかソリューションが決まらないことに苛立ちを覚えます。

== 不安感とうまく付き合うには


こう聞くと「ならばデザインと開発は別に作業したほうがよいのでは？」と思うかもしれません。しかし、その場合「技術的に実現できないデザインをしてしまう」「開発段階でデザインが改変され、もとの重要な意図が抜けてしまう」などのリスクを後回しにすることになります。もちろん、プロジェクトに余裕があれば「出戻り」が起こり、デザイナーが修正することになりますが、最悪の場合、重要な要素が抜けたことに気づかず、そのままリリースされることになります。一見非効率に見えるデザインと開発が一体になったアジャイルは、長い目でみれば効率とプロダクトの質を両立する最適解です。


鍵となるのは、いかに素早くプロダクトチームとして成長し、お互いのリズムを掴むか。はじめのうちに疑問点や不協和音を見ないフリをしてしまうと、あとあと自分たちに戻ってくることになります。つまり、不安になることが起こった場合、多少時間がかかったとしても、未来の自分たちを助けるつもりで対処するほうがよいのです。


それでは、不安とうまく付き合いつつ、前に進むにはどうすればよいのでしょうか。すべての不安を取り除くのは難しいかもしれませんが、筆者が体験した過去の取り組みでうまくいった例をいくつかあげてみます。

=== フレームワークどおりにやっているのに、しっくりこないとき


アジャイル初心者のチームにありがちなのが、研修で習ったプロセスをそのまま再現しようとし、理想どおりに進めず「失敗した」と思ってしまうことです。あくまで理論は理論であり、実践では予測どおりに行かないのは当たり前のことです。そのとき、チームが不安を口に出せずプロセスにしたがうことが強制されると、息苦しい時間が続くことになります。


ふりかえりで「うまくいっていない」と口に出せる、心理的安全性が大切です。また、あがってきた声を「でもアジャイルってこういうものだから」と潰してしまわない、思考停止しないことも重要でしょう。アジャイルの原則から離れすぎてはいけませんが、習ったプロセスに固執するのではなく、自分たちに最適な方法を考えましょう。どこまで崩してよいのかわからないこともあるでしょうから、アジャイルコーチなどに参加してもらうのも有効です。

=== デザインがボトルネックに感じる場合


デザインがボトルネックになる状況を防ぐために、いくつかできることがあります。

 * ディスカバリープロジェクトから定期的に開発者が参加し、コンセプトのイメージを掴んだり、技術的な見解をインプットする
 * 体験設計のビジョンになるもの（ストーリーボードなど）を誰でも、どこからでも見られるようにしておく
 * ムードボード、UIのサンプルなどをラフに作っておき、なんとなくできあがりの雰囲気を掴んでおく
 * デザインシステムやガイドラインを準備しておき、ユーザーストーリーの取り組みはじめから参照できるようにしておく
 * 多少ドキュメンテーションが後回しになっても、コミュニケーションを取りお互いの理解を深めることを優先し、ドキュメンテーションは合意したことの記録程度にとどめる


密なコミュニケーションも重要です。デザイナーのなかで決まっていない要素はどこなのか、それはなぜか。開発者は先に作業できること、後回しにしてもよいことなどを伝えると、デザイナーの作業も進みやすくなります。

=== チームの周りに不安感が漂う場合


チーム外のステークホルダーとの調整は難しいかも知れませんが、できることはあります。

 * 「アジャイルとは？」「デザインとは？」といった勉強会を、社内ステークホルダー向けに開催する
 * デモのなかでデザインモックアップを見せる時間をきちんと組み込む
 * ある程度かたちになってからデモにステークホルダーを呼ぶ



ここでも鍵となるのはコミュニケーションです。自分たちが何を意図していて、どんなものを目指しているのか、なるべく具体的に見せられる何かを用意をしましょう。

== 終わりに


プロダクトチームのメンバー、また周りにいるステークホルダーもひとりひとり人間です。不安になることもあるし、アジャイルの本が示す型にはまりきらない部分も多いでしょう。口に出せない不安感、さらに不信感が積み重なると、「プロダクトを構築する方法に関する不確実性」が増すことになります。


「小さくはじめ、改善させながら積み重ねていく」ことは、チーム自体の成長にもいえることです。まだ取り組みはじめたばかりのチームが、フレームワークを試してみてもうまくいかなくて、不安に思うことは当たり前のことです。誰かが不安を感じていたら、それはチームがステップアップするチャンスです。その理由に注目して、どうしたら解消できそうか考えてみてください。


不安が「チャンス」に見えはじめたとき、みなさんはアジャイルな組織として大きな一歩を踏み出した証拠です。

==== 参考書籍


MIKE COHN（2009）. アジャイルな見積もりと計画づくり　毎日コミュニケーションズ

Collin Lyons（2019）. Make Learn Change ustwo ltd.


　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/mayunak.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        中村麻由@mayunak https://twitter.com/mayunak/\\
        https://mayunak.com/
        \end{minipage}
    \hspace{1ex}
//}

ustwo Tokyoでプリンシパルデザイナーをしています。イギリスに10年滞在し、ユーザー中心設計を学んだあと現在の会社のロンドン本社に入社しました。デザインと開発の距離をもっと縮めたいと考えています。
