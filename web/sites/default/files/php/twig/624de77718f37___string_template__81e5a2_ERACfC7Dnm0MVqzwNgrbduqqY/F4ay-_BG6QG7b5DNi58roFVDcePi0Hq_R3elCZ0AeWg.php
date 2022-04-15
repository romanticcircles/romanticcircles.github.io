<?php

use Twig\Environment;
use Twig\Error\LoaderError;
use Twig\Error\RuntimeError;
use Twig\Extension\SandboxExtension;
use Twig\Markup;
use Twig\Sandbox\SecurityError;
use Twig\Sandbox\SecurityNotAllowedTagError;
use Twig\Sandbox\SecurityNotAllowedFilterError;
use Twig\Sandbox\SecurityNotAllowedFunctionError;
use Twig\Source;
use Twig\Template;

/* __string_template__81e5a2b8a6a5df3f1ebe4ca66cecb08e6b1b78562ddae03c2daa99fe70469fc0 */
class __TwigTemplate_831f488e22628bb9679057d062f3e3aec6098d4f6cfaa1843d0a5248b2104802 extends \Twig\Template
{
    private $source;
    private $macros = [];

    public function __construct(Environment $env)
    {
        parent::__construct($env);

        $this->source = $this->getSourceContext();

        $this->parent = false;

        $this->blocks = [
        ];
        $this->sandbox = $this->env->getExtension('\Twig\Extension\SandboxExtension');
        $this->checkSecurity();
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $macros = $this->macros;
        // line 1
        echo "<h2>";
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["title"] ?? null), 1, $this->source), "html", null, true);
        echo "</h2>

<strong>Genre: </strong>";
        // line 3
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_genre_tags"] ?? null), 3, $this->source), "html", null, true);
        echo "
<br>

<!-- Main Creators -->
";
        // line 7
        if ($this->extensions['Drupal\Core\Template\TwigExtension']->renderVar(($context["field_main_creator"] ?? null))) {
            // line 8
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Film", 1 => "Television"])) {
                echo " <strong>Director: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_main_creator"] ?? null), 8, $this->source)), "html", null, true);
                echo " ";
            }
            // line 9
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Literature", 1 => "Theater", 2 => "Hypertext Fiction"])) {
                echo " <strong>Author: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_main_creator"] ?? null), 9, $this->source)), "html", null, true);
                echo " ";
            }
            // line 10
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Music"])) {
                echo " <strong>Recording Artist: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_main_creator"] ?? null), 10, $this->source)), "html", null, true);
                echo " ";
            }
            // line 11
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Games", 1 => "Visual Art"])) {
                echo " <strong>Artist: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_main_creator"] ?? null), 11, $this->source)), "html", null, true);
                echo " ";
            }
            // line 12
            echo "    <br>
";
        }
        // line 14
        echo "
<!-- Secondary Creators -->
";
        // line 16
        if ($this->extensions['Drupal\Core\Template\TwigExtension']->renderVar(($context["field_secondary_creator"] ?? null))) {
            // line 17
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Film", 1 => "Television"])) {
                echo " <strong>Screenwriter: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_secondary_creator"] ?? null), 17, $this->source)), "html", null, true);
                echo " ";
            }
            // line 18
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Theater"])) {
                echo " <strong>Playwright: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_secondary_creator"] ?? null), 18, $this->source)), "html", null, true);
                echo " ";
            }
            // line 19
            echo "    <br>
";
        }
        // line 21
        echo "
<!-- Featuring -->
";
        // line 23
        if ($this->extensions['Drupal\Core\Template\TwigExtension']->renderVar(($context["field_media_featuring"] ?? null))) {
            // line 24
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Film", 1 => "Television"])) {
                echo " <strong>Starring: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_media_featuring"] ?? null), 24, $this->source)), "html", null, true);
                echo " ";
            }
            // line 25
            echo "    ";
            if ((strip_tags(($context["field_genre_tags"] ?? null)) == "Music")) {
                echo " <strong>Album: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_media_featuring"] ?? null), 25, $this->source)), "html", null, true);
                echo " ";
            }
            // line 26
            echo "    <br>
";
        }
        // line 28
        echo "
<!-- Media Producer -->
";
        // line 30
        if ($this->extensions['Drupal\Core\Template\TwigExtension']->renderVar(($context["field_producer"] ?? null))) {
            // line 31
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Frankenstein Covers", 1 => "Literature", 2 => "Hypertext Fiction"])) {
                echo " <strong>Publisher: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_producer"] ?? null), 31, $this->source)), "html", null, true);
                echo " ";
            }
            // line 32
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Film", 1 => "Television"])) {
                echo " <strong>Production Co.: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_producer"] ?? null), 32, $this->source)), "html", null, true);
                echo " ";
            }
            // line 33
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Music"])) {
                echo " <strong>Record Label: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_producer"] ?? null), 33, $this->source)), "html", null, true);
                echo " ";
            }
            // line 34
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Theater"])) {
                echo " <strong>Theater Co.: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_producer"] ?? null), 34, $this->source)), "html", null, true);
                echo " ";
            }
            // line 35
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Games"])) {
                echo " <strong>Developed By: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_producer"] ?? null), 35, $this->source)), "html", null, true);
                echo " ";
            }
            // line 36
            echo "    ";
            if (twig_in_filter(strip_tags(($context["field_genre_tags"] ?? null)), [0 => "Visual Art"])) {
                echo " <strong>Gallery: </strong>";
                echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_producer"] ?? null), 36, $this->source)), "html", null, true);
                echo " ";
            }
            // line 37
            echo "    <br>
";
        }
        // line 39
        echo "
<!-- Consistent Labels --> 
";
        // line 41
        if ($this->extensions['Drupal\Core\Template\TwigExtension']->renderVar(($context["field_date_published_released"] ?? null))) {
            echo "<strong>Date Published/Released: </strong>";
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_date_published_released"] ?? null), 41, $this->source)), "html", null, true);
            echo "<br>";
        }
        // line 42
        echo "
";
        // line 43
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["body"] ?? null), 43, $this->source), "html", null, true);
        echo "

";
        // line 45
        if ($this->extensions['Drupal\Core\Template\TwigExtension']->renderVar(($context["field_tags"] ?? null))) {
            echo "<strong>Tags:</strong> ";
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_tags"] ?? null), 45, $this->source), "html", null, true);
        }
    }

    public function getTemplateName()
    {
        return "__string_template__81e5a2b8a6a5df3f1ebe4ca66cecb08e6b1b78562ddae03c2daa99fe70469fc0";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  204 => 45,  199 => 43,  196 => 42,  190 => 41,  186 => 39,  182 => 37,  175 => 36,  168 => 35,  161 => 34,  154 => 33,  147 => 32,  140 => 31,  138 => 30,  134 => 28,  130 => 26,  123 => 25,  116 => 24,  114 => 23,  110 => 21,  106 => 19,  99 => 18,  92 => 17,  90 => 16,  86 => 14,  82 => 12,  75 => 11,  68 => 10,  61 => 9,  54 => 8,  52 => 7,  45 => 3,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__81e5a2b8a6a5df3f1ebe4ca66cecb08e6b1b78562ddae03c2daa99fe70469fc0", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array("if" => 7);
        static $filters = array("escape" => 1, "render" => 7, "striptags" => 8);
        static $functions = array();

        try {
            $this->sandbox->checkSecurity(
                ['if'],
                ['escape', 'render', 'striptags'],
                []
            );
        } catch (SecurityError $e) {
            $e->setSourceContext($this->source);

            if ($e instanceof SecurityNotAllowedTagError && isset($tags[$e->getTagName()])) {
                $e->setTemplateLine($tags[$e->getTagName()]);
            } elseif ($e instanceof SecurityNotAllowedFilterError && isset($filters[$e->getFilterName()])) {
                $e->setTemplateLine($filters[$e->getFilterName()]);
            } elseif ($e instanceof SecurityNotAllowedFunctionError && isset($functions[$e->getFunctionName()])) {
                $e->setTemplateLine($functions[$e->getFunctionName()]);
            }

            throw $e;
        }

    }
}
